#include <stdio.h>
#include <string.h>

// Used strlen and strcpy function from <string.h>
int main()
{
    char name[] = "Sawan";
    printf("Length is : %d\n", strlen(name));

    char Oldstr[] = "Bharat";
    char Newstr[20] = "India";
    strcpy(Newstr, Oldstr);
    puts(Newstr);

    char Fstr[50] = "Sawan";
    char Sstr[] = "Kushwaha";
    strcat(Fstr, Sstr);
    puts(Fstr);

    //int cmp = strcmp(Fstr, Sstr);
    printf("strcmp result: %d\n", strcmp(Fstr, Sstr)); 

    printf("The Reversed string name is: ");
    puts(strrev(name));

    return 0;
}
