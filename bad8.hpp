// Malformed header to trigger compiler issues
#pragma once

template<typename T>
T multiply(T a, T b) {
    return a * b;
 // missing closing brace and malformed comment

extern int global_undeclared; // declaration ok but no definition
