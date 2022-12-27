#ifndef UTILS_HPP
#define UTILS_HPP

#include <raylib.h>


Vector2 operator+(Vector2 lhs, Vector2 rhs);
void operator+=(Vector2& lhs, const Vector2& rhs);
Vector2 operator*(int scalar, Vector2 rhs);
Vector2 operator-(Vector2 lhs, Vector2 rhs);

float GetHypot(Vector2 vec);
Vector2 GetNormalized(Vector2 vec);

const int StringLength(const char* string);
const char* JoinPath(const char* const parent, const char* const child);
const char* ToString(Vector2 vec);

#endif // UTILS_HPP
