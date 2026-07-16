// Broken header to trigger compile/link issues
#pragma once

class Broken {
public:
    Broken();
    ~Broken();
    void doSomething();
};

// Definition with syntax errors
Broken::Broken() {
    int x = ; // invalid syntax
}
