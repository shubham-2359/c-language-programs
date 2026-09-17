#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7 * (i + 1);
    }

    printf("Multiplication Table of 7 upto 10\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    arr = realloc(arr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        arr[i] = 7 * (i + 1);
    }

    printf("Multiplication Table of 7 upto 15\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}