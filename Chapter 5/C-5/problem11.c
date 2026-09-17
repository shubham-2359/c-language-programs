#include <stdio.h>
#include <math.h>

// square of a number
float square(float num)
{
    return num * num;
}

// square root of a number
float SquareRoot(float num)
{
    return sqrt(num);
}

int main()
{
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    printf("Square of %.0f is %.0f\n", n, square(n));

    if (n < 0)
    {
        printf("Square root of a negative number is not real.\n");
    }
    else
    {
        printf("Square root of %.2f is %.2f\n", n, SquareRoot(n));
    }

    return 0;
}
