#include<stdio.h>
int countLength(char arr[]);

//Input user's name and prints its length
int main(){
    char name[50];
    fgets(name, 50, stdin);
    printf("Length is: %d", countLength(name));
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}