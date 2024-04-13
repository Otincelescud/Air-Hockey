#include "vector2.h"

Vector2::Vector2() { x = 0.0f; y = 0.0f; }
template<typename T> Vector2::Vector2(T xval, T yval) {
    x = float(xval);
    y = float(yval);
}

Vector2::~Vector2() {}

template<typename T> void Vector2::setX(T xval) { x = float(xval); }
template<typename T> void Vector2::setY(T yval) { y = float(yval); }

float Vector2::getX() { return x; }
float Vector2::getY() { return y; }

Vector2 Vector2::operator+(Vector2 vector) { return Vector2(x + vector.getX(), y + vector.getY()); }
Vector2 Vector2::operator-(Vector2 vector) { return Vector2(x - vector.getX(), y - vector.getY()); }

template<typename T> Vector2 Vector2::operator*(T scalar) { return Vector2(x*float(scalar), y*float(scalar)); }
template<typename T> Vector2 Vector2::operator/(T scalar) { return Vector2(x/float(scalar), y/float(scalar)); }

float Vector2::modulus() { return float(sqrt(x*x + y*y)); }
Vector2 Vector2::normalize() { return *this / this->modulus(); }