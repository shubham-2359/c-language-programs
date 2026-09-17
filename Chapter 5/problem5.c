#include <stdio.h>
int sum(int n);

//sum of first n natural numbers
int main()
{
    int n = 9;
    printf("sum is : %d", sum(9));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}