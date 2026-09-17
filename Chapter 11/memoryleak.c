#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int *i2;
    while (i < 45)
    {
        printf("Welcome To Code With Sourabh\n");
        i2 = malloc(3 * sizeof(int));
        if (i % 10 == 0)
        {
            getchar();
        }
        i++;
        free(i2);
    }

    return 0;
}