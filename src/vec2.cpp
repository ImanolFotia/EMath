#include "../include/vec2.h"
#include "../include/functions.h"

namespace EMath
{

vec2::vec2(float ix, float iy)
{
    x = ix;
    y = iy;
}

vec2 vec2::operator+(vec2 vector2)
{


    return vec2(x + vector2.x, y + vector2.y);
}

vec2 vec2::operator-(vec2 vector2)
{


    return vec2(x - vector2.x, y - vector2.y);
}

vec2 vec2::operator/(vec2 vector2)
{


    return vec2(x / vector2.x, y / vector2.y);
}

vec2 vec2::operator*(vec2 vector2)
{

    return vec2(x * vector2.x, y * vector2.y);
}

void vec2::normalize()
{

    x = x/length;
    y = y/length;

    setlength();
}

vec2 vec2::normalize(vec2 vector2)
{

    vector2.x = vector2.x/vector2.length;
    vector2.y = vector2.y/vector2.length;

    setlength();

    return vec2(x, y);
}

void vec2::setlength()
{
        length = sqrt((x * x) + ( y * y ));

    if(length < 0)
        length *= -1;
}

double vec2::getlength(vec2 vector2)
{

    length = sqrt((vector2.x * vector2.x) + ( vector2.y * vector2.y ));

    if(length < 0)
        length *= -1;

    return length;
}

}
