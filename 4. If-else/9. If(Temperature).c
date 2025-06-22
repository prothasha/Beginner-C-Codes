#include<stdio.h>
int main() {

    float temperature, Temperature;
    char unit;

    printf("Enter Weight: ");
    scanf("%f", &temperature);

    printf("Enter Unit: ");
    scanf(" %c", &unit);

    if (unit=='C' || unit=='c') {
        Temperature = (9*temperature/5)+32;
        printf("Temperature is: %.2f Fahrenheit", Temperature);
    }
    else if (unit=='F' || unit=='f') {
        Temperature = 5*((temperature-32)/9);
        printf("Temperature is: %.2f Celsius", Temperature);
    }
    else {
        printf("Invalid input");
    }
}