#include <stdio.h>

/*Student passed or failed
marks > 30 is pass
marks < 30 is fail
*/
int main()
{
    int marks;
    printf("Enter number(0 - 100): ");
    scanf("%d", &marks);

    // Ternary Operators
    // marks > 30 ? printf("PASS\n") : printf("FAIL\n");

    if (marks >= 0 && marks <= 30)
    {
        printf("FAIL\n");
    }
    else if (marks > 30 && marks < 100)
    {
        printf("PASS\n");
    }
    else
    {
        printf("Wrong Marks");
    }
    return 0;
}
