#pragma once

namespace BadNamespace {
    class BrokenClass {
    public:
        BrokenClass() : x(0) {}
        int getValue() const {
            x = 10; // error: modifying const member
        }
        int getValue(int a, int b // missing closing paren and brace
    private:
        mutable int x;
    };
}
