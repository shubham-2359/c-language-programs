#include<stdio.h>

//int sum2 = 34;
int myfunc(int a, int b)
{
    auto int sum;
    sum = a + b;
    return sum;
}
int main2(){
    int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);
    return 0;

}