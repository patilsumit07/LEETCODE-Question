#include <iostream>
#include <vector> // Mandatory header to use std::vector

int main() {
    // 1. Declare and initialize a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // 2. Add an element to the end of the vector
    numbers.push_back(60);

    // 3. Print the elements using a standard loop
    std::cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Signals successful completion to the compiler
}
