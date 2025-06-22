#include<stdio.h>
int main() {
    int n;

    printf("Enter the term: ");
    scanf("%d", &n);

    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;

    printf("\n");

    for(int i=2; i<=n; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printf("Series: ");
    for(int i=0; i<n; i++) {
        printf("%d ", fibo[i]);
    }
    return 0;
}
