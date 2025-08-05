#include <stdio.h>

int main() {
    int number = 42; // Declared a integer variable named "number"
    float pi = 3.14f; // Declared a float variable named "pi"
    char letter = 'A'; // Declared a char variable named "letter"

    // int sujal is good; is not a valid declaration in C
    // int $sujal or #sujal 7sujal or sujal@ is not a valid declaration in C
    // int sujal_patel is a valid declaration in C
    // int sujal-patel is not a valid declaration in C
    
    printf("The number is: %d\n", number);
    printf("The value of pi is: %.2f\n", pi);
    printf("The letter is: %c\n", letter);
    return 0;
}