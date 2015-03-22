#include "../include/vec3.h"
#include "../include/functions.h"

namespace EMath{

vec3::vec3(float xi, float yi, float zi){

x = xi;
y = yi;
z = zi;

length = sqrt((x * x) + ( y * y ) + ( z * z ));

if(length < 0)
    length *= -1;

}

vec3::vec3(vec2 vector2, float zi){

x = vector2.x;
y = vector2.y;
z = zi;

length = sqrt((x * x) + ( y * y ) + ( z * z ));

if(length < 0)
    length *= -1;
}

vec3::vec3(float xi, vec2 vector2){

x = xi;
y = vector2.x;
z = vector2.y;

length = sqrt((x * x) + ( y * y ) + ( z * z ));

if(length < 0)
    length *= -1;
}

vec3 vec3::operator+(vec3 vector3){

setlength();
return vec3(x + vector3.x, y + vector3.y, z + vector3.z);
}

vec3 vec3::operator-(vec3 vector3){

setlength();
return vec3(x - vector3.x, y - vector3.y, z - vector3.z);
}

vec3 vec3::operator/(vec3 vector3){

setlength();
return vec3(x / vector3.x, y / vector3.y, z / vector3.z);
}

vec3 vec3::operator*(vec3 vector3){

setlength();
return vec3(x * vector3.x, y * vector3.y, z * vector3.z);
}

vec3 vec3::operator=(vec3 vector3){

x = vector3.x;
y = vector3.y;
z = vector3.z;

setlength();

return vec3(x, y, z);

}
void vec3::normalize(){

x = x/length;
y = y/length;
z = z/length;

setlength();
}

vec3 vec3::normalize(vec3 vector3){

vector3.x = vector3.x/vector3.length;
vector3.y = vector3.y/vector3.length;
vector3.z = vector3.z/vector3.length;

setlength();

return vec3(x, y, z);
}

void vec3::setlength(){

length = sqrt((x * x) + ( y * y ) + ( z * z ));

if(length < 0)
    length *= -1;

}

double vec3::getlength(vec3 vector3){

length = sqrt((vector3.x * vector3.x) + ( vector3.y * vector3.y ) + ( vector3.z * vector3.z ));

if(length < 0)
    length *= -1;

return length;
}


}
