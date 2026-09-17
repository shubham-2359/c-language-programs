#include <stdio.h>
#include <stdlib.h>

// Allocate memory to store 6 integers
int main()
{
    int n = 6;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    // calloc
    // arr = (int*)calloc(n, sizeof(int));

    // arr[0] = 1;
    // arr[1] = 3;
    // arr[2] = 5;
    // arr[3] = 7;
    // arr[4] = 9;
    // arr[5] = 11;

    //Q.2 integers entered by the user
    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered integers are:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}
