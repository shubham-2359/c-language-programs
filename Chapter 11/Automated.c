#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    // Lets ccount the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldwordlength - 1;
        }
    }

    // Making a new string to fit in the replaced words

    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);
    // resultstring = (char *)malloc(strlen(str) + count * (newwordlength - oldwordlength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");

    char str[200];
    fgets(str, 200, ptr);
    printf("The Given Bill Template Was: %s\n", str);

    // Call the replaceword function and generate newstr
    char *newstr;
    newstr = replaceword(str, "{{item}}", "Dagger");
    newstr = replaceword(newstr, "{{outlet}}", "Solo Leveling");
    newstr = replaceword(newstr, "{{name}}", "Saurabh");

    printf("The Actual Bill Generated  Is: %s\n", newstr);
    printf("The Generated bill Has Been Written To The Genbill.txt\n");

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
/*
char *temp;
newstr = replaceword(str, "{{item}}", "Dagger");
temp = newstr;

newstr = replaceword(newstr, "{{outlet}}", "Solo Leveling");
free(temp);

temp = newstr;
newstr = replaceword(newstr, "{{name}}", "Saurabh");
free(temp);
*/

/*
No NULL Checks for File Pointers
If bill.txt doesn't exist, or there's a file error, the program will crash.
if (ptr == NULL || ptr2 == NULL) {
    printf("Error opening file(s).\n");
    return 1;
}
*/