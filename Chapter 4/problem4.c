#include <stdio.h>

// Factorial of a given number (for loop)
// int main()
//{
//    int product = 1;
//    int n = 7;
//    for (int i = 1; i <= n; i++)
//    {
//        product *= i;
//    }
//    printf("The factorial is %d", product);
//    return 0;
//}

// while loop
int main()
{
    int n = 7, i = 1;
    int product = 1;
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}