#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};
    std::make_heap(data.begin(), data.end()); // Transforms 'data' into a max-heap

    // The largest element (9) is now at the front
    std::cout << "Heap after make_heap: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
