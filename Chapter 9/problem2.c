#include <stdio.h>

// Sum of two vector
typedef struct vector
{
    int i;
    int j;
} sv;

sv sumvector(sv v1, sv v2)
{
    sv v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    struct vector v1 = {6, 9};
    struct vector v2 = {8, 7};
    struct vector v3 = sumvector(v1, v2);
    printf("The value of vector v3 is %di + %dj", v3.i, v3.j);
    return 0;
}