#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("students.txt", "w");  // Open file for writing

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Header of the table
    fprintf(fptr, "%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
    fprintf(fptr, "---------------------------------------------\n");

    // Information for 5 students
    int rollno;
    char name[50];
    float marks;

    for (int i = 0; i < 5; i++) {
        printf("Enter Roll No: ");
        scanf("%d", &rollno);
        printf("Enter Name: ");
        scanf(" %[^\n]", name);  // Read string with spaces
        printf("Enter Marks: ");
        scanf("%f", &marks);

        // Write to file
        fprintf(fptr, "%-10d %-20s %-10.2f\n", rollno, name, marks);
    }

    fclose(fptr);
    printf("Student information successfully written to 'students.txt'.\n");

    return 0;
}
