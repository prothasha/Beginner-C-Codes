#include <stdio.h>
void num(int n) {
    if (n>1) {
        return num(n-1);
    }
    printf("%d ",n);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("Numbers: ");
    num(x);
    return 0;
}
