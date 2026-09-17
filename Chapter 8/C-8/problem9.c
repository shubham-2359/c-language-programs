#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 256

//Highest frequency character in a string
int main() {
    char str[50];
    int freq[SIZE] = {0};  // Array to store frequency of each character
    int i;
    char maxChar;
    int maxFreq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Optional: Ignore spaces and make case-insensitive
        if (ch == ' ')
            continue;
        ch = tolower(ch);  // Make lowercase for consistent counting

        freq[(int)ch]++;

        // Check if this character has the highest frequency so far
        if (freq[(int)ch] > maxFreq) {
            maxFreq = freq[(int)ch];
            maxChar = ch;
        }
    }

    printf("Character with highest frequency: '%c' occurred %d times\n", maxChar, maxFreq);

    return 0;
}
