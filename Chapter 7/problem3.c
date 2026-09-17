#include <stdio.h>

// Q.2 input provided by the user using scanf
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n", n, i + 1, arr[i]);
    }
    return 0;
}
