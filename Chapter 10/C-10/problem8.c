#include <stdio.h>

// Read & Write a char
int main()
{
    FILE *fptr;
    fptr = fopen("r&w.txt", "r+");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Reading 5 characters
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    // Reset file pointer to beginning
    fseek(fptr, 0, SEEK_SET);

    // Writing characters
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);
    return 0;
}
