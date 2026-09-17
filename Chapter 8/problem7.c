#include <stdio.h>
#include <string.h>
void checkchar(char str[], char ch);

// Check whether a given character is present in a string or not
int main()
{
    char str[] = "Paramatma";
    char ch = 'r';
    checkchar(str, ch);
    return 0;
}

void checkchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present");
            return;
        }
    }
    printf("character is not present");
}
