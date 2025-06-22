#include<stdio.h>
int num(int n){
    printf("%d ",n);
    if (n>1) {
        return num(n-1);
    }
    if (n==1) {
        return 1;
    }
}
int main () {
    int x;
    scanf("%d", &x);
    printf("Numbers: ");
    num(x);
    return 0;
}
