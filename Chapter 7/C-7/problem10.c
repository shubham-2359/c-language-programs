#include<stdio.h>

//2D Arrays
int main(){
    int marks[2][3];
    //marks[0][1] = 80;
    //marks[0][0] = 90;
    //marks[0][2] = 70;
    //marks[1][0] = 60;
    //marks[1][1] = 50;
    //marks[1][2] = 40;

    //printf("%d", marks[0][0]);
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("Value of arr[%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("Value of arr[%d][%d] is %d\t", i, j, marks[i][j]);
            
        }
    }
    return 0;
}

