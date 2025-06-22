#include<stdio.h>
int main() {
    int a, b;

    printf("A is: ");
    scanf("%d", &a);
    printf("B is: ");
    scanf("%d", &b);

    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    int div=a/b;
    int mod=a%b;

    printf("Sum is: %d\n", sum);
    printf("Sub is: %d\n", sub);
    printf("Multi is: %d\n", multi);
    printf("Div is: %d\n", div);
    printf("Mod is: %d", mod);

    return 0;
}
