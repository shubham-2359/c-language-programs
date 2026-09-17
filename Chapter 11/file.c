#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("myfile.txt", "r");

    char string[100];

    // fscanf(ptr, "%s", string);
    // printf("%s\n", string);
    // printf("\n");

    // fscanf(ptr, "%s", string);
    // printf("%s\n", string);

    for (int i = 0; i < 5; i++)
    {
        fscanf(ptr, "%s", string);
        printf("%s\n", string);
    }
    printf("\n");

    fclose(ptr);
    return 0;
}