#include<stdio.h>

void printm() {
    printf("Chocolate");
}
void printn() {
    printf("Sandwich");
}
void printo() {
    printf("Burger");
}
void printp() {
    printf("Biriyani");
}

int main() {
    int T;
    printf("Enter your amount: ");
    scanf("%d", &T);
    if (T==100) {
        printn();
    }
    else if (T>100 && T<200) {
        printo();
    }
    else if (T<100) {
        printm();
    }
    else {
        printp();
    }
    return 0;
}
