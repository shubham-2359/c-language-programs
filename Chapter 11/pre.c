#include <stdio.h>
#include "problem5.c"
#define PI 3.14
#define SQUARE(r) r *r

int main()
{
    int var = PI;
    int r = 5;
    // int a = PI;

    printf("This is me %d\n", var);
    printf("This is me %f\n", PI * SQUARE(r));

    // printf("This is PI %d\n", a);

    return 0;
}