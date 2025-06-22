#include<stdio.h>
int main() {
    
    printf("1.Add\n2.Sub\n3.Multi\n4.Div\n");
    int x;
    printf("Enter the operator: ");
    scanf("%d", &x);
    int a,b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    if (x == 1) {
        printf("Addition is: %d\n", a+b);
    }
    else if (x == 2) {
        printf("Subtraction is: %d\n", a-b);
    }
    else if (x == 3) {
        printf("Multiplication is: %d\n", a*b);
    }
    else if (x == 4) {
        printf("Division is: %d\n", a/b);
    }
    else {
        printf("Invalid input \n");
    }
    printf("Thanks 🌸");

    return 0;
}