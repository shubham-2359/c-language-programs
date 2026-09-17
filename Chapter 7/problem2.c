#include <stdio.h>

// Array of 10 integers and store multiplication table of 5
// int main()
//{
//   int arr[10];
//   for(int i = 0; i < 10; i++)
//   {
//      arr[i] = 5 * (i+1);
//   }
//   for(int i = 0; i < 10; i++)
//   {
//      printf("5 x %d = %d\n", i+1, arr[i]);
//   }
//   return 0;
//}

void storetable(int arr[][10], int n, int m, int number);

// Storing the tables of 2 and 3 by using function
int main()
{
    int tables[2][10];
    storetable(tables, 0, 10, 2);
    storetable(tables, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }
    printf("\n");
    return 0;
}

void storetable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}
