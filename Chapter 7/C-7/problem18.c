#include<stdio.h>

//Transpose of a given matrix
int main(){
    int r, c, a[50][50], transpose[50][50], i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("\nEnter matrix elements: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("Enter element a[%d][%d] : ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("%d", a[i][j]);
            if(j == c-1){
                printf("\n");
            }
        }
    }

    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("%d", transpose[i][j]);
            if(j == c-1){
                printf("\n");
            }
            }
            printf("\n");
        }
    return 0;
}