#include<stdio.h>
int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a%2==0) {
        printf("Even Number");
    }
    else if (a%2!=0) {
        printf("Odd Number");
    }
    return 0;
}