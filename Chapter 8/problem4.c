#include <stdio.h>
#include <string.h>

// Encrypt a string by adding 1 to the ASCII value of its characters
int main()
{
    char str[] = "Saurabh";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);
    return 0;
}
