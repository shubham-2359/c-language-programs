#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <operation> <num1> <num2>\n", argv[0]);
        return 1;
    }

    char *operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    printf("Operation is %s\n", operation);
    printf("Num1 is %d\n", num1);
    printf("Num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0) {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0) {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0) {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0) {
        if (num2 == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", num1 / num2);
        }
    }
    else {
        printf("Unknown operation: %s\n", operation);
    }

    return 0;
}
