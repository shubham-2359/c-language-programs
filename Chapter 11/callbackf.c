#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning\n");
    printf("The sum of 6 and 9 is %d\n", fptr(6, 9));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);
    printf("\n");
    greetGmAndExecute(ptr);

    return 0;
}