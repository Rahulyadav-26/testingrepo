// More intentionally broken C++ for PR stress-testing
#include <iostream>

int main() {
    std::cout << "bad11" << std::endl;
    int arr[3] = {1,2,3,4}; // too many initializers
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i] << std::endl;
    }
    auto ptr = nullptr;
    *ptr = 5; // dereference null pointer
    return 0;
}
