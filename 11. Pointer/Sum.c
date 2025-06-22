#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int *ptr1, *ptr2;
    ptr1=&a;
    ptr2=&b;
    int sum=*ptr1+*ptr2;
    printf("Sun is = %d\n",sum);
}
