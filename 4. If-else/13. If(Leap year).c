#include<stdio.h>
int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%4==0) {
        printf("Leap year");
    }
    else if (year%100!=0) {
        printf("Not leap year");
    }
    else if (year%400==0) {
        printf("Leap year");
    }
    else {
        ("Not leap year");
    }
    return 0;
}