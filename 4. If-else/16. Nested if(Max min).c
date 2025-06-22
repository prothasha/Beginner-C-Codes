#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a>b) {
        if (a>c) {
            printf("a is maximum\n");
            if (b>c) {
                printf("c is minimum\n");
            }
            else {
                printf("b is minimum\n");
            }
            
        }
        else {
            printf("c is maximum\n");
            printf("b is minimum\n");
        }
    }
    else if (b>c) {
        if (b>a) {
            printf("b is maximum\n");
            if (c>a) {
                printf("a is minimum\n");
            }
            else {
                printf("c is minimum\n");
            }
        }
        else {
            printf("a is maximum\n");
            printf("c is minimum\n");
        }
    }
    else {
        printf("c is maximum\n");
        if (a>b) {
            printf("b is maximum\n");
        }
        else {
            printf("a is minimum");
        }
    }
}