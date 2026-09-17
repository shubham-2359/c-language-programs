// Calculate simple interest for a set of values representing principal, number of years and rate of interest
#include <stdio.h>

int main()
{
    float p = 37.5;
    int r = 10;
    int t = 3;
    printf("The value of simple interest is %f", (p * r * t) / 100);

    return 0;
}