#include <stdio.h>

// Read three integers from a file :- 27 23 11 (Reading from a file)
int main()
{
    FILE *fptr;
    fptr = fopen("int.txt", "r");
    
    int n1, n2, n3;
    fscanf(fptr, "%d %d %d", &n1, &n2, &n3);
    printf("The value are %d %d %d \n", n1, n2, n3);

    fclose(fptr);
    return 0;
}
