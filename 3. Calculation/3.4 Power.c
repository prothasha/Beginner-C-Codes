#include<stdio.h>
#include<math.h>
int main() {
    int a, b;

    printf("A is: ");
    scanf("%d", &a);
    printf("B is: ");
    scanf("%d", &b);

    int p=pow(a,b);
    printf("Power is: %d", p);

    return 0;

}