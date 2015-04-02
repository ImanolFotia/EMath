#ifndef EMATH_H_INCLUDED
#define EMATH_H_INCLUDED

namespace EMath
{

class vec2
{

public:
    vec2(float, float);

    virtual ~vec2() {}

public:

    float x, y;

    double length;

public:

    vec2 operator+(vec2);

    vec2 operator-(vec2);

    vec2 operator/(vec2);

    vec2 operator*(vec2);

    vec2 operator=(vec2);

    void normalize();

    vec2 normalize(vec2);

private:
    void setlength();

    double getlength(vec2);

};

}
#endif // EMATH_H_INCLUDED
