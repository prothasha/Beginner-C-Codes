#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else for the second largest
    if (a > b) {
        if (b > c) {
            printf("The second largest number is: %d\n", b);
        } else if (a > c) {
            printf("The second largest number is: %d\n", c);
        } else {
            printf("The second largest number is: %d\n", a);
        }
    } else {
        if (a > c) {
            printf("The second largest number is: %d\n", a);
        } else if (b > c) {
            printf("The second largest number is: %d\n", c);
        } else {
            printf("The second largest number is: %d\n", b);
        }
    }

    return 0;
}

