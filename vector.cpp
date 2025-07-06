#include <iostream>
#include <vector>

int main() {
  // Declare and initialize a vector of integers
//   std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::vector<int> numbers = {1,2 };

  // Add an element to the end of the vector
  numbers.push_back(6);

  // Access and print elements of the vector
  std::cout << "Elements of the vector:" << std::endl;
  for (size_t i = 0; i < numbers.size(); ++i) {
    std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
  }

  // Modify an element
  numbers[2] = 10;
  std::cout << "\nModified element at index 2:" << std::endl;
  std::cout << "numbers[2] = " << numbers[2] << std::endl;
  std::cout << std::endl;
  
  std::cout << "Elements of the vector:" << std::endl;
  for (size_t i = 0; i < numbers.size(); ++i) {
    std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
  }


  // Get the size of the vector
  std::cout << "\nSize of the vector: " << numbers.size() << std::endl;

  // Check if the vector is empty
  std::cout << "Is the vector empty? " << (numbers.empty() ? "Yes" : "No") << std::endl;

  // Remove the last element
  numbers.pop_back();
    std::cout << "\nElements of the vector after pop_back():" << std::endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

  return 0;
}