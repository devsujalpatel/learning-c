#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a > 18) {
        printf("You are an Adult\n");
    }
    else {
        printf("You are a Minor\n");
    }
    
    printf("You entered: %d\n", a);
    return 0;
}