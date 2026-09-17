#include <stdio.h>
#include <math.h>

//Armstrong number or not
int main() {
    int num, temp, remainder, result = 0, n = 0;

    printf("Enter an number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) { // Find the number of digits

        temp /= 10;
        n++;
    }
    temp = num;

    while (temp != 0) { // Calculate the sum of nth power of each digit

        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}

