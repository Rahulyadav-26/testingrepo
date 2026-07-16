// Intentionally broken file: syntax errors and missing tokens
#include <iostream>
#include <vector>

int main() {
    std::cout << "Starting bad5" << std::endl;
    std::vector<int> v = {1, 2, 3
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }
    // missing closing brace for main and missing semicolon above
