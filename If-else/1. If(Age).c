#include<stdio.h>
int main() {

    int age;
    printf("Age is: ");
    scanf("%d", &age);
    
    if (age>18) {
        printf("Adult \n");
        printf("You can go \n");
    }
    else if (age == 18) {
        printf("You need a pass \n");
    }
    else if (age<18) {
        printf("Child \n");
    }
    printf("Thank you 🌸");

    return 0;
}
