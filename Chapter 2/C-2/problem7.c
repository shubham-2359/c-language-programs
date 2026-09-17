#include<stdio.h>
#include<string.h>

//Number is odd(0) or even(1)
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", x % 2 == 0);
    return 0;
}
