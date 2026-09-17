// Find and display memory allocated in bytes for basic data types
#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}