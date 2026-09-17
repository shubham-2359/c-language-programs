#include <stdio.h>
void dowork(int a, int b, int *sum, float *avg, int *prod);

// sum and average of two numbers
void dowork(int a, int b, int *sum, float *avg, int *prod)
{
    *sum = a + b;
    *avg = (float)(a + b) / 2;
    *prod = a*b;
}

int main()
{
    int a = 7, b = 9;
    int sum,prod; 
    float avg;
    dowork(a, b, &sum, &avg, &prod);
    printf("sum = %d, avg = %.2f, prod = %d\n", sum, avg, prod);
    return 0;
}