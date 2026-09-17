#include<stdio.h>

//Find output & Value of x from pointer to pointer
int main(){
    int x = 3;

    int *ptr = &x;
    int **pptr = &ptr;
    printf("%d\n", **pptr);

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}