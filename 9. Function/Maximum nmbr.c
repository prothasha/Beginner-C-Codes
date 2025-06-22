/*#include<stdio.h>
int max(int a, int b, int c) {
    if (a>b && a>c) {
        printf("Maximum is: %d", a);
    }
    else if (b>a && b>c) {
        printf("Maximum is: %d", b);
    }
    else {
        printf("Maximum is: %d", c);
    }
}
int main() {
    int A, B, C;
    printf("Enter the values: ");
    scanf("%d %d %d", &A, &B, &C);
    max(A, B, C);
}
*/
//Another process

#include<stdio.h>
int max(int a, int b, int c) {
    if (a>b && a>c) {
        return a;
    }
    else if (b>a && b>c) {
        return b;
    }
    else {
        return c;
    }
}
int main() {
    int A, B, C;
    printf("Enter the values: ");
    scanf("%d %d %d", &A, &B, &C);
    int MAX=max(A, B, C);
    printf("Maximum is: %d", MAX);
    return 0;
}

