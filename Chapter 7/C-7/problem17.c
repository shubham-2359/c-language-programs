#include<stdio.h>

//Adding two matrices using array
int main(){
    int r, c, a[50][50], b[50][50], sum[50][50], i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\nEnter Elements of 1st matrix: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("Enter element a[%d][%d] : ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Elements of 2nd matrix: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("Enter element b [%d][%d] : ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of two matrices: \n");
    for(i = 0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    return 0;
}