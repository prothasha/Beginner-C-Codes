#include <stdio.h>
int fibo(int n) {
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    int x;
    scanf("%d", &x);
    //with series
    printf("Series: ");
    for (int i=0; i<x; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n%d", fibo(x));

    return 0;
}
