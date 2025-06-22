#include<stdio.h>
int main() {

    float weight, Weight;
    char unit;

    printf("Enter Weight: ");
    scanf("%f", &weight);

    printf("Enter Unit: ");
    scanf(" %c", &unit);

    if (unit=='K' || unit=='k') {
        Weight=weight*2.205;
        printf("Your weight is: %.2f Pound", Weight);
    }
    else if (unit=='L' || unit=='l') {
        Weight=weight/2.205;
        printf("Your weight is: %.2f kg", Weight);
    }
    else {
        printf("Invalid input");
    }
}

