#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int a[10][10];

    //Sum of diagonal elements of a square matrix
    printf("Enter the number of rows/columns: ");
    scanf("%d", &m);
    n = m;

    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n-1; j++) {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Entered matrix is:\n");
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n-1; j++) {
            if(i == j)
            sum += a[i][j];
        }
    }
    printf("The sum of diagonal elements is: %d", sum);
    return 0;
}
