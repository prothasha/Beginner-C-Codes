#include<stdio.h>
int table(int a, int b) {
    //printf("%d x %d = %d\n", a, b, a*b);
    return a*b;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        table(i, n);
    }
    return 0;
}
