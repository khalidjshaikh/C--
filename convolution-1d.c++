#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate (optional, for sum)

// Function to perform 1D convolution
std::vector<double> convolve1D(const std::vector<double>& signal, 
                               const std::vector<double>& kernel) {
    int signal_size = signal.size();
    int kernel_size = kernel.size();
    
    // The size of the output convolution is (signal_size + kernel_size - 1)
    int output_size = signal_size + kernel_size - 1;
    std::vector<double> output(output_size, 0.0);

    // Perform the convolution
    for (int i = 0; i < output_size; ++i) {
        for (int j = 0; j < kernel_size; ++j) {
            // Check for valid indices in the signal
            if (i - j >= 0 && i - j < signal_size) {
                output[i] += signal[i - j] * kernel[j];
            }
        }
    }
    return output;
}

int main() {
    // Define the input signal
    std::vector<double> signal = {1.0, 2.0, 3.0, 4.0};

    // Define the convolution kernel/filter
    std::vector<double> kernel = {0.5, 1.0};

    // Perform the convolution
    std::vector<double> result = convolve1D(signal, kernel);

    // Print the original signal and kernel
    std::cout << "Signal: ";
    for (double val : signal) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Kernel: ";
    for (double val : kernel) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Print the convolution result
    std::cout << "Convolution Result: ";
    for (double val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}