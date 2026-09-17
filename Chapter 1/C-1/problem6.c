#include<stdio.h>

//Area of a square
int main(){
    int s;
    printf("Enter side: ");
    scanf("%d", &s);

    printf("Area of a square is: %d", s*s);
    //<math.h> --> pow(s,2)
    return 0;
}
