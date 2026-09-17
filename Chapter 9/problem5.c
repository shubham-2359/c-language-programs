#include<stdio.h>

//Array of 5 complex numbers and value taken as an input from the user
typedef struct complex{
    int real;
    int imaginary;
}sc;

void display(sc Cn){
    printf("The value of Complex number is %d + %di \n", Cn.real, Cn.imaginary);
}

int main(){
    sc CN[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter real part: \n");
        scanf("%d", &CN[i].real);
        printf("Enter imaginary part: \n");
        scanf("%d", &CN[i].imaginary);
        display(CN[i]);
    }
    return 0;
}