#include <stdio.h>

int main() {
    // if else 
    // int n;
    // scanf("%d", &n);
    // if (n % 2 == 0) {
    //     printf("even");
    // } else {
    //     printf("odd");
    // }

    // if else if else
    // int n;
    // scanf("%d", &n);
    // if (n > 18) {
    //     printf("Adult");
    // } else if (n > 12) {
    //     printf("Teenager");
    // } else {
    //     printf("Child");
    // }

    // switch case
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        default:
            printf("Invalid");
            break;
    }

    return 0;
}