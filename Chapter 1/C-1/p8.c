#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("Length of str1 = %d\n", strlen(str1));//%zu
    printf("Length of str2 = %d\n", strlen(str2));

    int result = strcmp(str1, str2);
    //printf("%d", strcmp(str1, str2));

    if(result == 0){
        printf("str1 and str2 are equal\n");
    }
    else if(result > 0){
        printf("str1 is greater than str2\n");
    }
    else {
        printf("str2 is greater than str1\n");
    }

    return 0;

}