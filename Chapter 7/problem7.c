#include <stdio.h>

// Array of size 3 x 10 containing multiplication tables input given by the user
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int tab[] = {n1, n2, n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = tab[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Multiplication table of %d:\n", tab[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}