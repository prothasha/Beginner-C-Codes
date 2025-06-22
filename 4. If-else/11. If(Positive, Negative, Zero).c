#include<stdio.h>
int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a>0) {
        printf("Positive Number");
    }
    else if (a==0) {
        printf("Zero");
    }
    else {
        printf("Negative Number");
    }
    return 0;
}