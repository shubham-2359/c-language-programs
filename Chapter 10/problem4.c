#include <stdio.h>

// Salary of two employee
int main()
{
    FILE *ptr;
    ptr = fopen("salary.txt", "w");
    char name1[30], name2[30];
    int salary1, salary2;

    printf("Enter the name of Employee 1\n");
    scanf("%s", name1);
    printf("Enter the salary of Employee 1\n");
    scanf("%d", &salary1);

    printf("Enter the name of Employee 2\n");
    scanf("%s", name2);
    printf("Enter the name of Employee 2\n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

    fclose(ptr);
    return 0;
}

// Student information from a user
// char name[10]; int age; float cgpa;
// fprintf(ptr, "%s\n", name);
// fprintf(ptr, "%d\t", age);
// fprintf(ptr, "%f\t", cgpa);