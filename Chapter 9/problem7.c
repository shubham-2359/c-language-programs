#include <stdio.h>

// Bank Account Information of a customer of ABC Bank
typedef struct bankaccount
{
    int accountNo;
    char name[50];
} acc;

int main()
{
    acc a1 = {123, "Mohan"};
    acc a2 = {456, "Sawan"};
    acc a3 = {789, "Rohan"};

    printf("AccNo = %d\t", a1.accountNo);
    printf("Name = %s", a1.name);
    printf("\n");
    printf("AccNo = %d\t", a2.accountNo);
    printf("Name = %s", a2.name);
    printf("\n");
    printf("AccNo = %d\t", a3.accountNo);
    printf("Name = %s", a3.name);

    return 0;
}
