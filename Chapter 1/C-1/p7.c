#include <stdio.h>

int main()
{
    int num[10];
    int i, j, a, n;

    printf("Enter number of elements in an array : \n");
    scanf("%d", &n);

    /*
    if (n > 10) {
    printf("Error: Maximum allowed elements is 10.\n");
    return 1;
    } */

    printf("Enter the elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    // Sort in ascending order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }

    printf("The Number in Ascending Order is:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}