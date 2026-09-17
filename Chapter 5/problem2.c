#include <stdio.h>
float convertTemp(float celsius);

// celsius into fahrenheit
float convertTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}

int main()
{
    float far = convertTemp(74);
    printf("%f", far);
    return 0;
}
