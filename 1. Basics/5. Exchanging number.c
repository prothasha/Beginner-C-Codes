#include<stdio.h>
int main() {
    int num1, num2, temp;

    printf("Before:\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d", num2);
    return 0;
}
