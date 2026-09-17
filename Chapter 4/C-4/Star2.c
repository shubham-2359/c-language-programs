#include<stdio.h>

//Triangular Star Pattern & Reversed Triangular Star by user 
void star(int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void revstar(int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows-i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    int rows, type;

    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    
    switch(type)
    {
    case 0:
         star(rows);
         break;

    case 1:
         revstar(rows);
         break;

    default:
         printf("You have entered an invalid choice");
    }

    return 0;
}