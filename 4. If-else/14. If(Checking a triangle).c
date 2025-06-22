#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);
    if (a==b && b==c && a==c) {
        printf("Equilateral triangle");
    }
    else if (a==b || b==c || a==c) {
        printf("Isosceles triangle");
    }
    else {
        printf("Scalene triangle");
    }
}