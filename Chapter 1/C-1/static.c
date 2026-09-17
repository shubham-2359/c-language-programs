#include<stdio.h>

int func(){
    static int a = 5;
    a++;
    return a;
}

int main(){
   int a = func();
   printf("%d\n", a);

   a = func();
   printf("%d\n", a);

   return 0;

}