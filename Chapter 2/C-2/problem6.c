#include<stdio.h>

//Smallest number of two 
int main(){
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if(n1 < n2){
        printf("The Smallest number is:%d\n", n1);
    }
    else if(n1 > n2){
        printf("The Smallest number is:%d\n", n2);
    }
    else{
        printf("Both numbers are equal:%d\n", n1);
    }
    return 0;
}