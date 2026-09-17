#include <stdio.h>
void printTable(int n);

//Print Table
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printTable(n); //Argument
    return 0;
}

void printTable(int n) //Parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}
