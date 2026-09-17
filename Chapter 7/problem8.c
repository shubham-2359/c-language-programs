#include <stdio.h>

// Three dimensional array and print the address of its elements in increasing order
int main()
{
    int arr[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}