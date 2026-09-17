#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered integers are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    arr = realloc(arr, 10);

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered integers are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}