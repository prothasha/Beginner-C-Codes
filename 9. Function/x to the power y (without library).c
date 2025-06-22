#include<stdio.h>

int p(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    printf("%d ^ %d = %d\n", base, exp, result);
    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        p(i, n);
    }
    return 0;
}

