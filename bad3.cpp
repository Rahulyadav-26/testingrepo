// Another intentionally broken C++ file for PR testing
#include <iostream>

int func(int a) {
    return a *; // syntax error: incomplete expression
}

class A {
public:
    A() : a(0) {}
    void method() const {
        a = 5; // error: assignment in const method
    }
private:
    int a;
};

int main() {
    std::cout << unknownVar << std::endl; // undeclared identifier
    func(10);
    return 0;
}
