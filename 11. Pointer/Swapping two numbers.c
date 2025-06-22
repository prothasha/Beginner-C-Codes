#include<stdio.h>
int main() {
    int a, b, p;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int *ptr1, *ptr2;
    ptr1=&a;
    ptr2=&b;
    //swapping
    p=*ptr1;
    *ptr1=*ptr2;
    *ptr2=p;

    printf("X = %d\n", a);
    printf("Y = %d\n", b);
    return 0;
}
