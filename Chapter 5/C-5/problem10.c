#include <stdio.h>
#include <math.h>

// square of a number
int square(int i)
{
    return i * i;
}

// square root of a number
float SquareRoot(float f)
{
    return sqrt(f);
}

int main()
{
    int i;
    float f;

    printf("Enter a number: ");
    scanf("%d", &i);

    printf("Enter a number: ");
    scanf("%f", &f);

    printf("Square of %d is %d\n", i, square(i));

    if (f < 0)
    {
        printf("Square root of a negative number is not real.\n");
    }
    else
    {
        printf("Square root of %.0f is %f\n", f, SquareRoot(f));
    }

    return 0;
}
