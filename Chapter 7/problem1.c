#include <stdio.h>

/*Array of 10 numbers.
verify using pointer arithmetic that (ptr+2) points to the third element
where ptr is a pointer pointing to the first element of the array.
*/
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;

    printf("The value at address %u is %d", ptr + 2, *(ptr + 2));
    return 0;
}