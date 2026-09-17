#include <stdio.h>

// Calculate the sum of the numbers occurring in the multiplication table of 8 (for loop).
// int main(){
//     int sum = 0;
//
//     for (int i = 1; i <= 10; i++){
//        sum += (8*i);
//    }
//    printf("Sum of the table of 8 is %d", sum);
//   return 0;
// }

// While loop
int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        sum += (8 * i);
        i++;
    }
    printf("Sum of the table of 8 is %d", sum);
    return 0;
}
