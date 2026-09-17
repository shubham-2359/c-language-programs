#include <stdio.h>
#include <math.h>

float Square(float s){
    return s * s;
}

float Circle(float r){
    return 3.14 * r * r; // M_PI is a constant for π = 3.14
}

float areaOfRectangle(float l, float w){
    return l * w;
}

int main()
{
    float s, r, l, w;

    printf("Enter the side of the square: ");
    scanf("%f", &s);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &l, &w);

    printf("Area of square: %.2f\n", Square(s));
    printf("Area of circle: %.2f\n", Circle(r));
    printf("Area of rectangle: %.2f\n", areaOfRectangle(l, w));

    return 0;
}
