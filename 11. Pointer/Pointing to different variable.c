#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int *ptr;
    ptr=&a;
    printf("The value of a is = %d\n",*ptr);

    ptr=&b;
    printf("The value of b is = %d\n",*ptr);

    ptr=&c;
    printf("The value of c is = %d",*ptr);

    return 0;
}
