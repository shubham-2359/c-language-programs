/*Determine whether a character entered by the user is lowercase or not. (ASCII value)
uppercase(65 - 90), lowercase(97 - 122)
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("This character is lowercase\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("This character is uppercase\n");
    }
    else
    {
        printf("This is not english character\n");
    }
    return 0;
}
/*int main(){
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}*/