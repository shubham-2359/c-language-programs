#include <stdio.h>

// Multiplication table of a given number in text format (Writing to a file)
int main()
{
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    
    int n = 9;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d", n * i);
        fprintf(fptr, "%c", '\n');
    }
    fclose(fptr);
    return 0;
}
