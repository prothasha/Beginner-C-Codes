#include<stdio.h>
int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x>0){
        if (x%2==0) {
            printf("Positive Number\n");
            printf("Even Number\n");
        }
        else {
            printf("Positive Number\n");
            printf("Odd Number\n");
        }
    }
    else {
        printf("Negative Number");
    }
}