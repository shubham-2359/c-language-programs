#include <stdio.h>

// n terms of the fibonacci
int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: \n");
    for (i = 0; i < n; i++)
    {
        if (i < 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d", next);
    }
    printf("\n");
    return 0;
}