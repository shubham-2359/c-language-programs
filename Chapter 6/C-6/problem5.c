#include <stdio.h>
int valuechange(int n);

// call by value

int valuechange(int n)
{
    n = n * 10;
}

int main()
{
    int n = 5;
    printf("The value of a variable is : %d\n", n);
    valuechange(n);
    printf("The value of a variable ten time is : %d\n", n);
    return 0;
}
