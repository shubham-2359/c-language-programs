/*Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. */

#include <stdio.h>

int main()
{
    /* Area using hardcoded (fixed) values.
     int length = 5;
     int width = 7;
     printf(" The area of rectangle is %d", length * width);
    */

    // Area using dynamic user input.
    int length, width;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter width\n");
    scanf("%d", &width);
    //printf("The area of recatngle is %d", length * width);

    // Perimeter using user input
    printf("The perimeter of rectangle is %d", 2*(length + width));
    return 0;
}