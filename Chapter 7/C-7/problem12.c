#include <stdio.h>

//Print the largest number in an array
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", max);

    return 0;
}
