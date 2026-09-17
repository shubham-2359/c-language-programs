#include <stdio.h>
int sumOfDigits(int num);

//sum of digits of a number
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("Sum of digits: %d\n", sumOfDigits(number));
    return 0;
} 

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;        
    }  
    return sum;
}


