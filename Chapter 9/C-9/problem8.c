#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[50];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1664, 9.7, "Saurabh"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("student.roll = %d\n", s1.roll);
    printf("student.name = %s\n", s1.name);
    printf("student.cgpa = %f\n", s1.cgpa);
}

//Different printing method
//int main(){
//    struct student s1;
//    printf("Enter the student's name, roll number and fees paid: ");
//    gets(s1.name);
//    scanf("%d %f", &s1.roll, &s1.fees);
//
//    printf("The student details are as follows: \n name:%s\n roll number:%d\n fees:%f\n", s1.name, s1.roll, s1.fees);
//    return 0;
//}


