#include <stdio.h>
int fib(int n);

// nth element of fibonacci series
int main()
{
    fib(7);
    printf("%d", fib(7));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibn = fib(n - 1) + fib(n - 2);
    //printf("fib of %d is : %d\n", n, fibn);
    return fibn;
}
