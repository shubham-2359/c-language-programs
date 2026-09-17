#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceword(const char *str, const char *oldword, const char *newword)
{
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            i += oldwordlength - 1;
        }
    }

    char *resultstring = malloc(strlen(str) + count * (newwordlength - oldwordlength) + 1);
    if (!resultstring)
    {
        return NULL; // handle allocation failure
    }

    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i++] = *str++;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE *ptr = fopen("bill.txt", "r");
    FILE *ptr2 = fopen("genbill.txt", "w");

    if (ptr == NULL || ptr2 == NULL)
    {
        printf("Error opening file(s).\n");
        return 1;
    }

    char str[1024];
    fgets(str, 1024, ptr);
    printf("The Given Bill Template Was: %s\n", str);

    char *newstr, *temp;

    newstr = replaceword(str, "{{item}}", "Dagger");
    temp = newstr;
    newstr = replaceword(newstr, "{{outlet}}", "Solo Leveling");
    free(temp);

    temp = newstr;
    newstr = replaceword(newstr, "{{name}}", "Saurabh");
    free(temp);

    printf("The Actual Bill Generated Is: %s\n", newstr);
    fprintf(ptr2, "%s", newstr);

    free(newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
