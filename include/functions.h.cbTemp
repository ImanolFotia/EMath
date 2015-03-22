#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

inline
float Invsqrt(float x)
{
        float xhalf = 0.5f*x;
        union
        {
  	        float x;
            int i;
        } u;
        u.x = x;
        u.i = 0x5f3759df - (u.i >> 1); // Seriously???
        u.x = u.x * (1.5f - xhalf * u.x * u.x);
        return u.x;
}

inline
float sqrt(float x)
{
        float xhalf = 0.5f*x;
        union
        {
  	        float x;
            int i;
        } u;
        u.x = x;
        u.i = 0x5f3759df - (u.i >> 1); //???
        u.x = u.x * (1.5f - xhalf * u.x * u.x);
        return  1/u.x;
}


#endif // FUNCTIONS_H_INCLUDED
