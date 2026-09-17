#include <stdio.h>

// Print prime number in a range
int main()
{
    int lower, upper, i, j, isPrime;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++)
    {
        if (i < 2)
        {
            continue; // Numbers less than 2 are not prime
        }

        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
