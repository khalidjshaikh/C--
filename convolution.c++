#include <vector>
#include <numeric> // For std::accumulate

// Simple 1D convolution (full mode, zero-padded)
std::vector<double> convolve_1d(const std::vector<double>& input, const std::vector<double>& kernel) {
    int input_len = input.size();
    int kernel_len = kernel.size();
    int output_len = input_len + kernel_len - 1;

    std::vector<double> output(output_len, 0.0);

    for (int n = 0; n < output_len; ++n) {
        for (int k = 0; k < kernel_len; ++k) {
            int input_idx = n - k;
            if (input_idx >= 0 && input_idx < input_len) {
                output[n] += input[input_idx] * kernel[k];
            }
        }
    }
    return output;
}

int main() {

}
