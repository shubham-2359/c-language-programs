#include <stdio.h>

// Print multiplication table of a given number n.
int main()
{
    // int n;
    // printf("Enter number: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", n * i);
    // }

    // Print multiplication table of 10 in reversed order. 
    int n = 10;

    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}