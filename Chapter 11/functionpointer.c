#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(){
    printf("The sum of 1 and 2 is %d\n", sum(1,2));//Testing the  function
    int (*fptr)(int, int);//Declaring a function pointer
    fptr = &sum;//Creating a function pointer

    int d = (*fptr)(4, 8);//Dereferencing a function pointer
    printf("The value of d is %d\n", d);

    return 0;
}