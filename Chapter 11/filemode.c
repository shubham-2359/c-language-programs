#include <stdio.h>

int main()
{
    FILE *ptr;
    //ptr = fopen("filemode.txt","r");

    //char c = fgetc(ptr);
    //printf("The character I read was %c\n", c);

    //char str[10];
    //fgets(str, 9, ptr);
    //printf("The string I read was %s\n", str);

    ptr = fopen("filemode.txt","w");

    //fputc('l',ptr);
    fputs("It's_Possible",ptr);

    fclose(ptr);
    return 0;
}