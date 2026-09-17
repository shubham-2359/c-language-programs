#include<stdio.h>

//Character is digit or not
int main(){
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
    {
        printf("The Character '%c' is digit.\n", ch);
    }
    else{
        printf("The Character '%c' is not digit.\n", ch);
    }
    return 0;

}
