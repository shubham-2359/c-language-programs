#include <stdio.h>

//Maximum number between two numbers using a pointer
int main() {
    int n1, n2;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    // Assign pointers
    ptr1 = &n1;
    ptr2 = &n2;

    if (*ptr1 > *ptr2) {
        printf("Maximum number is: %d\n", *ptr1);
    } else {
        printf("Maximum number is: %d\n", *ptr2);
    }
    return 0;
}
