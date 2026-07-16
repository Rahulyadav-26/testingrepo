// Yet another broken C++ file for PR testing
#include "nonexistent.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v;
    v.push_back("hello"); // invalid: pushing const char* into vector<int>
    for (int i = 0; i <= v.size(); ++i)
        std::cout << v.at(i) << std::endl; // possible out_of_range
    return "done"; // invalid return type
}
