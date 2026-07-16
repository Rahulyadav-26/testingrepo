// Deliberately broken C++ file for PR testing
#include <iostream>

int main() {
    std::cout << "bad9 start" << std::endl // missing semicolon
    int x = "123"; // invalid conversion from const char* to int
    x = x + ; // syntax error: incomplete expression
    undeclared += 1; // use of undeclared identifier
    return "0"; // invalid return type
}
