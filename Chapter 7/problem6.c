#include <stdio.h>

// Array of size 3 x 10 containing multiplication tables
int main()
{
    int arr[3][10];
    int tab[] = {3, 5, 7};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = tab[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}