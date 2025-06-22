#include<stdio.h>
float area(float base, float height){
    printf("Area: %.2f", 0.5 * base * height);
}
int main() {
    float h, b;
    printf("Enter h: ");
    scanf("%f", &h);
    printf("Enter b: ");
    scanf("%f", &b);
    area(b, h);
}


//Another process
/*
#include<stdio.h>
float area(float base, float height){
    return 0.5 * base * height;
}

int main() {
    float a, b;
    float result;
    printf("Enter the base: ");
    scanf("%f", &a);
    printf("Enter the height: ");
    scanf("%f", &b);
    result = area(a, b);
    printf("Area of the triangle is: %.2f\n", result);
    return 0;
}
*/
