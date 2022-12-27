#include <cstdio>
#include <cstring>
#include <cmath>
#include <raylib.h>
#include "utils.hpp"


Vector2 operator+(Vector2 lhs, Vector2 rhs) {
    return {
        .x = lhs.x + rhs.x,
        .y = lhs.y + rhs.y,
    };
}


void operator+=(Vector2& lhs, const Vector2& rhs) {
    lhs = lhs + rhs;
}


Vector2 operator*(int scalar, Vector2 rhs) {
    return {
        .x = rhs.x * scalar,
        .y = rhs.y * scalar,
    };
}

Vector2 operator-(Vector2 lhs, Vector2 rhs) {
    return lhs + ( -1 * rhs );
}


float GetHypot(Vector2 vec) {
    return std::sqrt(vec.x * vec.x + vec.y * vec.y);
}


Vector2 GetNormalized(Vector2 vec) {
    const auto hypot = GetHypot(vec);
    return {
        vec.x / hypot,
        vec.y / hypot,
    };
}

const int StringLength(const char* string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

const char* JoinPath(const char* const parent, const char* const child) {
    auto parentLength = StringLength(parent);
    auto childLength = StringLength(child);
    char* joinedPath = new char[parentLength + childLength + 1];
    return strcat(strcpy(joinedPath, parent), child);
}


const char* ToString(Vector2 vec) {
    const char* temp = "Vector2(%.2f, %.2f)";
    char* string = new char[StringLength(temp) + 8];
    sprintf(string, temp, vec.x, vec.y);
    return string;
}


