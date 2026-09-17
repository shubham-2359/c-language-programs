#include<stdio.h>

//Vowel or Consonant
int isVowel(char ch){

    int check = 0;
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
             check = 1;
    }
    return check;
}

int main(){
    printf("a is %d\n", isVowel('a'));

    printf("x is %d", isVowel('x'));
    return 0;
}