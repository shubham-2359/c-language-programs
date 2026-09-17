#include <stdio.h>

int main()
{
    int a = 34;
    float b = 6.7;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %.2f\n", *((float *)ptr));

    return 0;
}