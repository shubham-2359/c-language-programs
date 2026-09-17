#include <stdio.h>
#include <ctype.h>  // for islower, isupper, tolower, toupper

//Replace lowercase letters with uppercase and vice versa in a string
void swapCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);  

    swapCase(text);

    printf("Swapped case string: %s", text);

    return 0;
}
