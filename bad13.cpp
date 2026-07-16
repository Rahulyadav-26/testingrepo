#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m;
    m[0] = "hello";
    std::cout << m.at(999) << std::endl; // exception: key not found
    int x = m.at(1 + ); // syntax error
    return;
}
