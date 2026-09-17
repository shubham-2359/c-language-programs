#include<stdio.h>
void printstring(char arr[]);

//Print all the Characters using the loop
int main(){
    char Firstname[] = "Saurabh";
    char Lastname[] = "Kushwaha";

    printstring(Firstname);
    printstring(Lastname);
    return 0;
}

void printstring(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\t");
}
