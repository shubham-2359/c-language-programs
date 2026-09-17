#include <stdio.h>

// Find how many times does a number 'x' occurs in c language
int main()
{
    int n, x, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count (x): ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("The number %d occurs %d time(s) in the array.\n", x, count);

    return 0;
}
