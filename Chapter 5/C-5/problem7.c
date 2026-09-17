#include <stdio.h>
void checkTemp(int temp);

// Hot or Cold depending on temperature
int main()
{
    int temp;
    printf("Enter the Temperature : ");
    scanf("%d", &temp);

    checkTemp(temp);
    return 0;
}

void checkTemp(int temp)
{
    if (temp >= 30)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Cold\n");
    }
}