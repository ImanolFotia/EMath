#ifndef EMATH_H_INCLUDED
#define EMATH_H_INCLUDED

class vec2{

vec2(float, float);

virtual ~vec2(){}

public:

float x, y;

public:

vec2 operator+(vec2);

vec2 operator-(vec2);

vec2 operator/(vec2);

vec2 operator*(vec2);

};

#endif // EMATH_H_INCLUDED
