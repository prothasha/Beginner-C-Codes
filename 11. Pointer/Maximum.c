#include<stdio.h>

int Max(int *a, int *b) {
    if(*a>*b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int num1, num2, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    max = Max(&num1, &num2);
    printf("\nMaximum number is: %d\n", max);

    return 0;
}
