#include <stdio.h>

int sum(int a, int b) {
    if (a>b) {
        return 0;
    }
    return a + sum(a+1,b);
}

int main() {
    int start=80;
    int end=100;
    printf("Sum of numbers: %d", sum(start, end));
    return 0;
}

