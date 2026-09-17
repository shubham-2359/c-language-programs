#include <stdio.h>

// Take string as an input from the user using %c and %s confirm that the strings are equal
int main()
{
    char str[6];

    //scanf("%c", str);

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &str[i]);
    }
    str[5] = '\0';

    printf("%s", str);
    return 0;
}