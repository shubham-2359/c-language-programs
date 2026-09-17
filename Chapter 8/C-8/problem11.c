#include <stdio.h>

//Remove blank spaces in a string 
void removeSpaces(char *str) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];  // copy non-space characters
            j++;
        }
        i++;
    }

    str[j] = '\0';  
}

int main() {
    char text[50];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);  

    removeSpaces(text);

    printf("String without spaces: %s\n", text);

    return 0;
}
