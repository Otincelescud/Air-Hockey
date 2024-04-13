#include <cmath>

class Vector2 {
public:
    Vector2();
    template<typename T> Vector2(T xval, T yval);

    ~Vector2();

    template<typename T> void setX(T xval);
    template<typename T> void setY(T yval);

    float getX();
    float getY();

    Vector2 operator+(Vector2 vector);
    Vector2 operator-(Vector2 vector);

    template<typename T> Vector2 operator*(T scalar);
    template<typename T> Vector2 operator/(T scalar);

    float modulus();
    Vector2 normalize();

private:
    float x;
    float y; 
};