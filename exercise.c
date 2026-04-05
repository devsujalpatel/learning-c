#include <stdio.h>

// function
int square(int x) {
    return x * x;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Square: %d\n", square(num));
    } else {
        printf("Enter positive number\n");
    }

    return 0;
}