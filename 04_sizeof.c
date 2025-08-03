#include <stdio.h>

int main() {
    int a = 5; // Declared an integer variable named "a"
    float b = 2.5f; // Declared a float variable named "b"
    char c = 'C'; // Declared a char variable named "c"

    printf("Size of int: %zu bytes\n", sizeof(a)); // Print size of int
    printf("Size of float: %zu bytes\n", sizeof(b)); // Print size of float
    printf("Size of char: %zu bytes\n", sizeof(c)); // Print size of char

    return 0;
}