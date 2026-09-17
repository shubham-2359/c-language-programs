#include <stdio.h>
#include <string.h>

// Decrypt the string encrypted using encrypt function
int main()
{
    char str[] = "Tbvsbci";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    return 0;
}
