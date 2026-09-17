/*Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. */
#include <stdio.h>

int main()
{
    /* Calculate the area of a circle
     int r = 7;
     printf("The area of circle with radius is %f", 3.14*r*r);
    */

    // Calculate the volume of a cylinder
    int r = 7;
    int h = 9;
    printf("The volume of cylinder with radius %d and height %d is %f\n", r, h, 3.14*r*r*h);

    return 0;
}