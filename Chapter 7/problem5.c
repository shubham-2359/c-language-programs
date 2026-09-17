#include <stdio.h>
int count(int arr[], int n);

// Count the number of positive integers in an array
int main()
{
    int arr[] = {1, -2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The no of positive integers is %d", count(arr, 10));
    return 0;
}

int count(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)  //if(arr[i] % 2 != 0) <-- odd numbers
        {
            count++;
        }
    }
    return count;
}
