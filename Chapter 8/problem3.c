#include <stdio.h>
#include <string.h>

// slice() to slice a string take m and n
void slice(char str[], int n, int m);

int main()
{
    char str[] = "Hello World Saurabh";
    slice(str, 6, 10);
}

void slice(char str[], int n, int m)
{
    char newstr[50];
    int j = 0;

    for (int i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}
