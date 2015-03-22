#ifndef VEC3_H_INCLUDED
#define VEC3_H_INCLUDED
#include "vec2.h"

namespace EMath{

class vec3{

public:

     vec3(float, float, float);

     vec3(vec2, float);

     vec3(float, vec2);

    virtual ~vec3(){}

public:

    float x, y, z;

public:

    vec3 operator+(vec3);

    vec3 operator-(vec3);

    vec3 operator/(vec3);

    vec3 operator*(vec3);
};

}

#endif // VEC3_H_INCLUDED
