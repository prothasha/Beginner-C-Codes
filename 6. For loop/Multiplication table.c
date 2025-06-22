#include<stdio.h>
int main () {
    int n;
    int multi=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int p=1; p<=10; p++) {
        multi=n*p;
        printf("%d * %d = %d\n", n, p, multi);
    }
}
