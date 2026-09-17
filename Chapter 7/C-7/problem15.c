#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[10][10];

    //Multidimension array
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
