#include <stdio.h>

//Letters in english alphabet using a pointer
int main() {
    char alphabet[26];
    char *ptr;
    int i;

    for(i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    ptr = alphabet;

    printf("English alphabet (A-Z):\n");
    for(i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
