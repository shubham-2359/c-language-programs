#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 220.5;
    printf("d.f = %.1f\n", d.f);

    strcpy(d.str, "Hello");
    printf("d.str = %s\n", d.str);

    printf("d.i = %d\n", d.i);     // Likely garbage
    printf("d.f = %.1f\n", d.f);   // Likely garbage
    printf("d.str = %s\n", d.str); // Valid

    return 0;
}
