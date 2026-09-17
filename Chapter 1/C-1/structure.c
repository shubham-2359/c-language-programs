#include<stdio.h>

typedef struct Driver
{
    char name[10];
    char d1No[10];
    char route[10];
    int kms;
} dr ;

int main()
{
    dr d1, d2, d3;
    printf("Enter the details of the Driver No.1\n");
    printf("Enter the detail of first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the d1no of first driver\n");
    scanf("%s", &d1.d1No);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of first driver\n");
    scanf("%s", &d1.kms);

    printf("Enter the details of the Driver No.2\n");
    printf("Enter the detail of second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the d1no of second driver\n");
    scanf("%s", &d2.d1No);

    printf("Enter the route of second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of second driver\n");
    scanf("%s", &d2.kms);

    printf("Enter the details of the Driver No.3\n");
    printf("Enter the detail of third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the d1no of third driver\n");
    scanf("%s", &d3.d1No);

    printf("Enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of third driver\n");
    scanf("%s", &d3.kms);

    printf("*********Printing Information of three drivers:*********\n");
    printf("For Driver No.1:\nName is %s\n", d1.name);
    printf("DL number is %s\n", d1.d1No);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    printf("For Driver No.2:\nName is %s\n", d2.name);
    printf("DL number is %s\n", d2.d1No);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);

    printf("For Driver No.3:\nName is %s\n", d3.name);
    printf("DL number is %s\n", d3.d1No);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);
}