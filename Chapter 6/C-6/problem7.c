#include <stdio.h>

//Array in reverse order
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //printf("Array elements in order:\n");
    //for(i = 0; i < n; i++) {
    //    printf("%d ", arr[i]);
    //}
    //printf("\n");

    printf("Array elements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
