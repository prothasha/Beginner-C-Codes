#include <stdio.h>

int R(int num) {
    while (num>0) {
        int digit=num%10;
        printf("%d ", digit);
        num=num/10;
    }
    return num;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    R(n);
    return 0;
}

