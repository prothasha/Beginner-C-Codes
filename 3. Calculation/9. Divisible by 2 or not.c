#include<stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d", num%2==0);
    return 0;
}

/* Output 0 = False
   Output 1 = True   */ 