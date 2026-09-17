#include<stdio.h>

//convert all lowercase vowel to uppercase in a string
void vowels(char *str){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == 'a'){
            str[i] = 'A';
        }else if(str[i] == 'e'){
            str[i] = 'E';
        }else if(str[i] == 'i'){
            str[i] = 'I';
        }else if(str[i] == 'o'){
            str[i] = 'O';
        }else if(str[i] == 'u'){
            str[i] = 'U';
        }
        i++;
    }
}

int main(){
    char ch[50];

    printf("Enter a string: ");
    fgets(ch, sizeof(ch), stdin);

    vowels(ch);

    printf("String with Capitalized vowels : %s", ch);
    return 0;
}