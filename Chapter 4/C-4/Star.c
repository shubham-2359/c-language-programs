#include<stdio.h>

//Star Pattern
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

    int rows;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    star(rows);
    revstar(rows);

    return 0;
}