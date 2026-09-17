#include <stdio.h>

// Sum of first n natural numbers and print them in reverse
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum is %d\n", sum);

    for (int i = n; i >= 1; i--)
    { // Reverse
        printf("%d\n", i);
    }
    return 0;

    // -||-
    // for (int i = 1, j = n; i <= n && j >= 1; i++, j++){
    // sum += i;
    //    printf("%d\n", j);
    //}
    // printf("Sum is %d\n", sum);
}
