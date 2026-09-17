#include <stdio.h>
#include <string.h>
int countch(char str[], char ch);

// Count the Occurrence of a given character in a string
int main()
{
    char str[] = "HelloWorld";
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);
    printf("Occurrence of %c character in a string is: %d\n", ch, countch(str, ch));

    return 0;
}

int countch(char str[], char ch)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}

// int count = 0;
// char c = 'r';
// char str[] = "vbxseryguliolbvcfhcz";
// int main(){
//     for (int i = 0; i < strlen(str); i++){
//         if(str[i] == c){
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }
