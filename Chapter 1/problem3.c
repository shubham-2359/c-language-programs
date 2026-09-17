#include <stdio.h>

// Convert temperature from Celsius to Fahrenheit
int main()
{
    float c = 40, f;

    f = ((9.0 / 5.0) * c) + 32;
    printf("The value of fahrenheit is %.2f", f);

    return 0;
}