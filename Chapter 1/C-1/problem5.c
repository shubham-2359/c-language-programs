#include <stdio.h>

//take a number from user and output its cube
int main()
{
    float n, c;

    printf("Enter a number: ");
    scanf("%f", &n);

    c = n * n * n;
    printf("The cube of number %f is %f", n, c);
    return 0;
}