#include<stdio.h>

int sum (int n1, int n2){
    printf("Sum is: %d\n", n1+n2);
}
int sub (int n1, int n2) {
    printf("Sub is: %d", n1-n2);
}
int main() {
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    sum(a,b);
    sub(a,b);
}
//another process
/*
#include<stdio.h>
int sum (int num1, int num2) {
    return num1+num2;
}
int sub (int num1, int num2) {
    return num1-num2;
}

int main() {
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    int ans=sum(a, b);
    printf("Sum is: %d\n", ans);
    ans=sub(a,b);
    printf("Sub is: %d", ans);
}
*/
