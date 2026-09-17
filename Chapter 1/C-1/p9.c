#include <stdio.h>
#include <string.h>
#define SIZE 20

typedef struct bookdetail
{
    char name[20];
    char author[20];
    int pages;
    float price;
} sb;

void output(sb v[], int n);

int main()
{
    sb b[SIZE];

    int num, i;
    printf("Enter the numbers of books: ");
    scanf("%d", &num);
    printf("\n");

    for (i = 0; i < num; i++)
    {
        printf("=: Book %d Detail :=\n", i+1);

        printf("Enter the Book Name:\n");
        scanf("%s",b[i].name);//Use fgets()

        printf("Enter the Author of Book:\n");
        scanf("%s",b[i].author);//Use fgets()

        printf("Enter the Pages of Book:\n");
        scanf("%d",&b[i].pages);

        printf("Enter the Price of Book:\n");
        scanf("%f",&b[i].price);
    }

    output(b,num);
    return 0;
}

void output(sb v[], int n)
{
    int i;
    for(i = 0; i < n; i++){

        printf("\nBook No.%d\n", i + 1);

        printf("\tBook Name : %s\n", v[i].name);

        printf("\tAuthor : %s\n", v[i].author);

        printf("\tPages : %d\n", v[i].pages);

        printf("\tPrice : %.2f\n", v[i].price);

        printf("\n");
    }
}