#include <stdio.h>
float average(float a, float b, float c);

// Find average of three numbers
int main()
{
    float a, b, c;

    printf("Enter numbers : ");
    scanf("%f %f %f", &a, &b, &c);

    float avg = average(a, b, c);
    printf("Average is : %f\n", avg);

    return 0;
}

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}