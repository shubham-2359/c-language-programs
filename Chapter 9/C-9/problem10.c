#include<stdio.h>
#include<string.h>
#define SIZE 20

//Structure using title, author, pages & price 
struct bookdetail{
    char name[20];
    char author[20];
    int pages;
    float price;
};

void output(struct bookdetail a[], int n);

int main(){
    struct bookdetail a[SIZE];
    int num, i;

    printf("Enter the numbers of books: ");
    scanf("%d", &num); 
    printf("\n");

    for(i = 0; i<num; i++){
        printf("\t=:Book %d Detail:=\n", i+1);

        printf("\nEnter the book name:\n");
        scanf("%s", a[i].name);

        printf("\nEnter the author of book:\n");
        scanf("%s", a[i].author);

        printf("\nEnter the pages of book:\n");
        scanf("%d", &a[i].pages);

        printf("\nEnter the price of book:\n");
        scanf("%f", &a[i].price);
    }
    output(a, num);
    return 0;
}

void output(struct bookdetail a[], int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        printf("\n");
        printf("Book No. %d\n");
        printf("\t\t Book %d Name is = %s\n", a[i].name);
        printf("\t\t Book %d Author is = %s\n", a[i].author);
        printf("\t\t Book %d Pages is = %d\n", a[i].pages);
        printf("\t\t Book %d Price is = %f\n", a[i].price);
        printf("\n");
    }
}

