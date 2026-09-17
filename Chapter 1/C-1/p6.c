#include<stdio.h>

int main(){

    int a = 5;

    LOOP:do {
        if(a == 15){
            a = a + 1;
            goto LOOP;
        }
        printf("Value of a: %d\n", a);
        a++;

    }while(a<20);
    
    return 0;
}