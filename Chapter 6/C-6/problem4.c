#include <stdio.h>
// void square(int n);
void _square(int *n);

/* Square & Will the address output be same ? */
int main()
{
    int n = 4;
    // printf("address of n is: %p\n", &n); ... for address
    // square(n); ...square
    
    //printf("address of n is: %u\n", &n); ...for address
    _square(&n);
    printf("n = %d\n", n);
    return 0;
}

// Call by Value
// void square(int n){
//     n = n * n;
//     printf("square = %d\n", n);
//     printf("address of n is: %p\n", &n); ...for address
// }

// Call by Reference
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
    //printf("address of n is: %u\n", &n); ...for address

}
