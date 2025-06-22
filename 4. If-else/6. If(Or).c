#include<stdio.h>
int main() {
    int a;
    printf("Enter your score: ");
    scanf("%d", &a);

    if (a >= 50 || a <= 30) {
        printf("You're not allowed \n");
        printf("Try next time");
    }
    else {
        printf("You're allowed");
    }
}
