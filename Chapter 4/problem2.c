/*What can be done using one type of loop can also be done using the other two 
types of loops – true or false?  True
*/

// Program to sum first ten natural numbers using while loop. 
#include <stdio.h>

//  int main()
// {
//  int i = 1, sum = 0;
//  while (i <= 10)
//  {
//      sum += i;
//     i++;
// }
//  printf("The sum of first 10 natural number is: %d\n", sum);
//  return 0;
// }

// Same Program with for loop. 
// int main(){
//     int i = 1, sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("sum of first 10 natural number is: %d\n", sum);
//     return 0;
// }

// Same program with do-while loop. 
int main()
{
    int i = 1, sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("sum of first 10 natural number is:%d\n", sum);
    return 0;
}