// Additional intentionally broken C++ example for PR review
#include "bad_header.hpp"
#include <vector>
#include <string>

int compute() {
    std::vector<int> v;
    return v.at(1); // potential runtime error (but valid compile) - kept for review
}

template<typename T>
T brokenTemplate(T a, T b) {
    return a + b + "oops"; // invalid: adding const char* to numeric types
}

int main() {
    int x = compute() // missing semicolon
    auto y = brokenTemplate(1, 2);
    missing_var = x + y; // use of undeclared identifier
    return "zero"; // returning string literal from int function
}
