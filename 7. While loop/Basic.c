#include<stdio.h>
int main () {
    int x=0;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    while (x<=n) {
        printf("%d " "", x);
        x=x+1;
    }
    return 0;
}
