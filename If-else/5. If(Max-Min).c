#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);

    if (a>b && a>c) {
        printf("A is maximum \n");
    }
    else if (b>a && b>c) {
        printf("B is maximum \n");
    }

    else {
        printf("C is maximum \n");
    }


    if (a<b && a<c) {
        printf("A is minimum \n");
    }
    else if (b<a && b<c) {
        printf("B is minimum \n");
    }

    else {
        printf("C is minimum \n");
    }

    return 0;
}