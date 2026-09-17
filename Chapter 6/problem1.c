#include <stdio.h>

//Q.1 print the address of a variable and address to get the value of the variable
// int main(){
//     int i = 2;
//     int *j = &i;
//     printf("The address of variable is : %u\n", &i);
//     printf("The value of variable is : %d\n", *j);
//     return 0;
// }

//Q.2 pass this variable(i) to a function and print its address. Are these addresses same? why?
int returning_5(int *j)
{
    printf("The value of j is : %d\n", j);
    printf("The value of j is : %d\n", *j);
}

int main()
{
    int i = 2;
    int *j = &i;
    printf("The address of i is : %u\n", &i);
    returning_5(j);
    return 0;
}