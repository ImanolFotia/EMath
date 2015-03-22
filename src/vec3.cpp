#include "../include/vec3.h"

namespace EMath{

vec3::vec3(float xi, float yi, float zi){

x = xi;
y = yi;
z = zi;

}

vec3::vec3(vec2 vector2, float zi){

x = vector2.x;
y = vector2.y;
z = zi;
}

vec3::vec3(float xi, vec2 vector2){

x = xi;
y = vector2.x;
z = vector2.y;
}

vec3 vec3::operator+(vec3 vector3){


return vec3(x + vector3.x, y + vector3.y, z + vector3.z);
}

vec3 vec3::operator-(vec3 vector3){

return vec3(x - vector3.x, y - vector3.y, z - vector3.z);
}

}
