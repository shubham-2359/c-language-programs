/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop 
counter is initialized to 0. 

#include <stdio.h>
int main(){

    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}

Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop. 
#include <stdio.h>
int main(){
    int n, i=1;
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i++;
    }while(i<=n);
    
    return 0;
}
    
*for loop 
#include <stdio.h>
int main(){
    int n = 12;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
*/