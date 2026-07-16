// Broken C++ file for PR testing
#include <iostream>
#include "bad6.hpp"

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(1); // wrong number of args
    std::cout << "Result: " << result << std::endl
    auto lambda = [](int x) -> int { return x * x; // missing closing brace for lambda
    std::cout << lambda(5) << std::endl;
    return 0;
}
