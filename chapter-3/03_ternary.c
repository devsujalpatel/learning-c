#include <stdio.h>

int main() {
    // condition ? expression_if_true : expression_if_false;

    int a = 32;
    int b = 30;
    a > b ? printf("a is greater than b\n") : printf("b is greater than a\n");
    return 0;
}