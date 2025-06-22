#include<stdio.h>
int main() {

    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >=80 && mark <=100) {
        printf("A+ \n");
    }
    else if (mark >=75 && mark <=79) {
        printf("A \n");
    }
    else if (mark >=70 && mark <=74) {
        printf("A- \n");
    }
    else if (mark >=65 && mark <=69) {
        printf("B+ \n");
    }
    else if (mark >=60 && mark <=64) {
        printf("B \n");
    }
    else if (mark >=55 && mark <=59) {
        printf("B- \n");
    }
     else if (mark >=50 && mark <=54) {
        printf("C+ \n");
    }
    else if (mark >=45 && mark <=49) {
        printf("C \n");
    }
    else if (mark >=40 && mark <=44) {
        printf("D \n");
    }
    else if (mark >=0 && mark <40) {
        printf("Fail \n");
    }
    else {
        printf("Invalid input \n");
    }
    printf("Thank you 🌸\n");
    printf("Go ahead");

    return 0;
}