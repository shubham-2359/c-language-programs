#include <stdio.h>

//Insert an element at the end of an array
int main() {
    int arr[100], n, i, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    arr[n] = element;

    printf("Updated array:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
