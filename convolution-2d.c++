#include <iostream>
#include <vector>

// Function to perform 2D convolution
std::vector<std::vector<double>> convolve2D(
    const std::vector<std::vector<double>>& input,
    const std::vector<std::vector<double>>& kernel) {

    int input_rows = input.size();
    int input_cols = input[0].size();
    int kernel_rows = kernel.size();
    int kernel_cols = kernel[0].size();

    // Calculate output dimensions (assuming "valid" convolution, no padding)
    int output_rows = input_rows - kernel_rows + 1;
    int output_cols = input_cols - kernel_cols + 1;

    // Initialize output matrix with zeros
    std::vector<std::vector<double>> output(output_rows, std::vector<double>(output_cols, 0.0));

    // Iterate through the input image
    for (int i = 0; i < output_rows; ++i) {
        for (int j = 0; j < output_cols; ++j) {
            double sum = 0.0;
            // Apply the kernel to the current region of the input
            for (int kr = 0; kr < kernel_rows; ++kr) {
                for (int kc = 0; kc < kernel_cols; ++kc) {
                    sum += input[i + kr][j + kc] * kernel[kr][kc];
                }
            }
            output[i][j] = sum;
        }
    }
    return output;
}

// Function to print a matrix
void printMatrix(const std::vector<std::vector<double>>& matrix) {
    for (const auto& row : matrix) {
        for (double val : row) {
            std::cout << val << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example Input Image (Matrix)
    std::vector<std::vector<double>> input = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Example Kernel (Filter) - e.g., an edge detection kernel
    std::vector<std::vector<double>> kernel = {
        {-1, -1, -1},
        {-1,  8, -1},
        {-1, -1, -1}
    };

    std::cout << "Input Matrix:" << std::endl;
    printMatrix(input);
    std::cout << std::endl;

    std::cout << "Kernel Matrix:" << std::endl;
    printMatrix(kernel);
    std::cout << std::endl;

    // Perform convolution
    std::vector<std::vector<double>> output = convolve2D(input, kernel);

    std::cout << "Output Matrix (Convolved):" << std::endl;
    printMatrix(output);

    return 0;
}