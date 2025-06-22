#include<stdio.h>
int main() {
    int a=20;
    int *ptr; //*ptr is for the main value of the variable/address, &a is for the address of the variable
    ptr=&a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %d\n", &a);
    printf("Address that stored in ptr: %d\n", ptr);
    printf("Content of ptr: %d\n", *ptr);
    printf("Address of ptr: %d", &ptr);
    return 0;
}
