#include <stdio.h>

// Sum of two vectors
typedef struct vector
{
    int x;
    int y;
} sv;

void sumvector(sv v1, sv v2, sv sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);
}

int main()
{
    sv v1 = {6, 9};
    sv v2 = {8, 7};
    sv sum = {0};

    sumvector(v1, v2, sum);
    return 0;
}
