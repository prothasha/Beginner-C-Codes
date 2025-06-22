#include<stdio.h>
int main () {
    int n;
    int sum=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int p=1; p<=n; p++) {
        printf("%d ", p);
        sum=sum*p;
    }
    printf("\nFactorial is: %d", sum);
}

