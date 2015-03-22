#include "../include/vec2.h"


namespace EMath{

vec2::vec2(float ix, float iy){
    x = ix;
    y = ix;
}

vec2 vec2::operator+(vec2 vector2){


return vec2(x + vector2.x, y + vector2.y);
}

vec2 vec2::operator-(vec2 vector2){


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

}
