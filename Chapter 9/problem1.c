#include<stdio.h>

//Two dimension vector using structures 
struct vector{
    int i;
    int j;
};

int main(){
    struct vector v = {3, 7};
    printf("The value of vector is %di + %dj", v.i, v.j);
    return 0;
}