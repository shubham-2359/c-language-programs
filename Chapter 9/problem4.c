#include <stdio.h>

// Use of arrow operator, structure representing a complex number and typedef keyword
typedef struct complex
{
    int real;
    int imaginary;
} sc;

int main()
{
    sc number = {4, 7};
    sc *ptr = &number;
    printf("The value of Complex number is %d + %di", ptr->real, ptr->imaginary);

    // printf("real part = %d\n", ptr->real);
    // printf("imaginary part = %d\n", ptr->imaginary);

    return 0;
}
