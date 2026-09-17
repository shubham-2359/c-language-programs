#include<stdio.h>

struct student{
    char name[50];
    int roll;
    int physics, chemistry, maths;
};

int main(){
    struct student s1[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i< n; i++){
        printf("Enter the student's name, roll number and marks in the three students:\n");
        scanf("%s %d %d %d %d", &s1[i].name, &s1[i].roll, &s1[i].physics, &s1[i].chemistry, &s1[i].maths);
    }
        printf("Name\tRoll No\tphysics\tchemistry\tmaths\n");
        printf("_________________________\n");
        for(i = 0; i< n; i++){
            printf("%s\t %d\t %d\t %d\n",  s1[i].name, s1[i].roll, s1[i].physics, s1[i].chemistry, s1[i].maths);

        }
    
return 0;
}



