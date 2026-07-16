// Malformed header to create compile failures
#pragma once

#ifndef BAD10_HPP
#define BAD10_HPP

int declared_but_no_type a_function(); // invalid declaration

template<typename T>
T missingBrace(T a, T b) {
    return a * b; // missing closing brace for template

// Forgot to close include guard
