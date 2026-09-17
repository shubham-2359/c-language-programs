// Find greatest of four numbers entered by the user
#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest of all is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest of all is %d", d);
    }
    /*
    int greatest = a;

    if (b > greatest){
        greatest = b;
    }
    if (c > greatest){
        greatest = c;
    }
    if (d > greatest){
        greatest = d;
    }
    printf("The greatest number is: %d\n", greatest);
    */
    return 0;
}