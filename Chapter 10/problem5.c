#include <stdio.h>

// Modify a file containing an integar to double its value
int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d", &n);
    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2 * n);
    fclose(ptr);

    return 0;
}