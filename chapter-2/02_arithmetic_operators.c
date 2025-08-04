#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    // Addition operator
    int c = a + b;
    printf("The sum of %d and %d is %d\n", a, b, c);
    // Modules operator is used to get the remainder
    int div = a % b;
    printf("The remainder of %d divided by %d is %d\n", a, b, div);
    // Subtraction operator
    int d = a - b;
    printf("The difference between %d and %d is %d\n", a, b, d);
    // Multiplication operator
    int e = a * b;
    printf("The product of %d and %d is %d\n", a, b, e);
    // Division operator
    float f = a / b;
    printf("The quotient of %d divided by %d is %f\n", a, b, f);

    return 0;
}