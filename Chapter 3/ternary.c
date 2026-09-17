#include <stdio.h>

// Demonstrate the use of ternary operator
int main(){
    // condition ? expression-if-true : expression-if-false
    int a = 345;
    int b= 345452;
    a>b?printf("a is greater"):printf("b is greater");
}

/* Demonstrate the use of switch statement
#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched");
    }
    return 0;
}
*/