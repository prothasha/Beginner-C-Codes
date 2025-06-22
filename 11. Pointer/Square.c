#include<stdio.h>

void square(int *ptr) {
    *ptr =(*ptr)*(*ptr); //
    printf("Square: %d\n", *ptr);
}

int main() {
    int p;
    printf("Enter the number: ");
    scanf("%d", &p);
    square(&p);
    return 0;
}
