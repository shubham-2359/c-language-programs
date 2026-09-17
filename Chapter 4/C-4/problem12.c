#include <stdio.h>

int main() {
    int choice;
    float input, result;

    while (1) {

        printf("\nUnit Conversion Menu:\n");
        printf("1.Kilometers to Miles\n");
        printf("2.Inches to Foot\n");
        printf("3.Centimeters to Inches\n");
        printf("4.Pounds to Kilograms\n");
        printf("5.Inches to Meters\n");
        printf("6.Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter distance in kilometers: ");
                scanf("%f", &input);
                result = input * 0.621371;
                printf("Distance in miles: %.2f\n", result);
                break;
            case 2:
                printf("Enter length in inches: ");
                scanf("%f", &input);
                result = input * 0.083333;
                printf("Length in feet: %.2f\n", result);
                break;
            case 3:
                printf("Enter length in centimeters: ");
                scanf("%f", &input);
                result = input * 0.393700;
                printf("Length in inches: %.2f\n", result);
                break;
            case 4:
                printf("Enter weight in pounds: ");
                scanf("%f", &input);
                result = input * 0.453592;
                printf("Weight in kilograms: %.2f\n", result);
                break;
            case 5:
                printf("Enter length in inches: ");
                scanf("%f", &input);
                result = input * 0.0254;
                printf("Length in meters: %.2f\n", result);
                break;
            case 6:
                printf("Exiting program.\n");
                return 0; //goto end;
            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }
    }
    //end:
    return 0;
}
