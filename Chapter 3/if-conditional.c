#include <stdio.h>

// Write a program to demonstrate the use of if statement
int main(){
    int age = 15;

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}

/* In C, any non-zero value is considered as true and zero is considered as false. 
So, the following if statements will be executed because they are non-zero values.

#include <stdio.h>
int main(){
    
    if(1){
        printf("This if is executed!\n");
    }
    if(2345){
        printf("This if is also executed!\n");
    }
    if(2.74){
        printf("This if is also executed!\n");
    }
    if('c'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("I am zero - I am not executed\n");
    }
    return 0;
}
*/