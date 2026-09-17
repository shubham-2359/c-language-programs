#include<stdio.h>
int valuechange(int *n);

//change the value of a variable to 10 time of its current value
int valuechange(int *n){
    *n = *n * 10;
}

int main(){
    int n = 5;
    printf("The value of a variable is : %d\n", n);
    valuechange(&n);
    printf("The value of a variable ten time is : %d\n", n);
    return 0;
}

