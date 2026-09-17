#include <stdio.h>
float force(float mass);

float g = 9.8;

// calculate force of attration on a body of mass 'm' exerted by earth. (g=9.8/s^2)
int main()
{
    float m = 47.0;
    float f = force(m);
    printf("Force of attration is :%f", f);
    return 0;
}

float force(float mass)
{
    return mass * g;
}
