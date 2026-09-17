#include <stdio.h>
#include <string.h>

// Maximum number of entries
#define MAX 100

// Structure for Student
typedef struct Student
{
    int id;
    char name[50];
    int age;
    char course[50];
} Ss;

// Structure for Teacher
typedef struct Teacher
{
    int id;
    char name[50];
    int age;
    char subject[50];
} st;

// Structure for Staff
typedef struct Staff
{
    int id;
    char name[50];
    int age;
    char position[50];
} ss;

// Main function
int main()
{
    Ss students[MAX];
    st teachers[MAX];
    ss staff[MAX];

    int studentCount = 0, teacherCount = 0, staffCount = 0;
    int choice;

    while (1)
    {
        printf("\n--- College Information System ---\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Display All Students\n");
        printf("5. Display All Teachers\n");
        printf("6. Display All Staff\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {
            printf("Enter Student ID: ");
            scanf("%d", &students[studentCount].id);
            getchar();

            printf("Enter Student Name: ");
            fgets(students[studentCount].name, 50, stdin);
            students[studentCount].name[strcspn(students[studentCount].name, "\n")] = 0; // Remove newline

            printf("Enter Student Age: ");
            scanf("%d", &students[studentCount].age);
            getchar();

            printf("Enter Course: ");
            fgets(students[studentCount].course, 50, stdin);
            students[studentCount].course[strcspn(students[studentCount].course, "\n")] = 0;
            studentCount++;
        }
        else if (choice == 2)
        {
            printf("Enter Teacher ID: ");
            scanf("%d", &teachers[teacherCount].id);
            getchar();

            printf("Enter Teacher Name: ");
            fgets(teachers[teacherCount].name, 50, stdin);
            teachers[teacherCount].name[strcspn(teachers[teacherCount].name, "\n")] = 0;

            printf("Enter Teacher Age: ");
            scanf("%d", &teachers[teacherCount].age);
            getchar();

            printf("Enter Subject: ");
            fgets(teachers[teacherCount].subject, 50, stdin);
            teachers[teacherCount].subject[strcspn(teachers[teacherCount].subject, "\n")] = 0;
            teacherCount++;
        }
        else if (choice == 3)
        {
            printf("Enter Staff ID: ");
            scanf("%d", &staff[staffCount].id);
            getchar();

            printf("Enter Staff Name: ");
            fgets(staff[staffCount].name, 50, stdin);
            staff[staffCount].name[strcspn(staff[staffCount].name, "\n")] = 0;

            printf("Enter Staff Age: ");
            scanf("%d", &staff[staffCount].age);
            getchar();

            printf("Enter Position: ");
            fgets(staff[staffCount].position, 50, stdin);
            staff[staffCount].position[strcspn(staff[staffCount].position, "\n")] = 0;
            staffCount++;
        }
        else if (choice == 4)
        {
            printf("\n--- All Students ---\n");
            for (int i = 0; i < studentCount; i++)
            {
                printf("ID: %d, Name: %s, Age: %d, Course: %s\n",
                       students[i].id, students[i].name, students[i].age, students[i].course);
            }
        }
        else if (choice == 5)
        {
            printf("\n--- All Teachers ---\n");
            for (int i = 0; i < teacherCount; i++)
            {
                printf("ID: %d, Name: %s, Age: %d, Subject: %s\n",
                       teachers[i].id, teachers[i].name, teachers[i].age, teachers[i].subject);
            }
        }
        else if (choice == 6)
        {
            printf("\n--- All Staff ---\n");
            for (int i = 0; i < staffCount; i++)
            {
                printf("ID: %d, Name: %s, Age: %d, Position: %s\n",
                       staff[i].id, staff[i].name, staff[i].age, staff[i].position);
            }
        }
        else if (choice == 7)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
