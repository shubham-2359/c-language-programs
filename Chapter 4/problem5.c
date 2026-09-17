// Write a program to check whether a given number is prime or not using loops. 

#include <stdio.h>

// for loop
int main()
{
    int n = 11;
    int Not_prime = 0;

    if (n == 0 || n == 1)
    {
        Not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                Not_prime = 1;
                break;
            }
        }
    }
    if (Not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }
    return 0;
}

// while loop
int main()
{
    int n = 11;
    int Not_prime = 0;

    if (n == 0 || n == 1)
    {
        Not_prime = 1;
    }
    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                Not_prime = 1;
                break;
            }
            i++;
        }

        /* do-while loop
        int i = 2;
        do
        {
            if (n % i == 0 && n != 2)
            {
                Not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
        */
    }
    if (Not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }
    return 0;
}