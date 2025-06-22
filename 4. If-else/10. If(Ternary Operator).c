#include<stdio.h>
int main() {
    int a, b;

    printf("A is: ");
    scanf("%d", &a);
    printf("B is: ");
    scanf("%d", &b);
    
    a>18? printf("A is adult \n"):printf("A is not adult \n");
    a>0? printf("A is positive \n"):printf("A is negative \n");
    a%2==0? printf("A is even \n"):printf("A is odd \n");
    a>b? printf("A is greater \n"):printf("B is greater \n");
    a<b? printf("A is smaller \n"):printf("B is smaller \n");
    b>=18? printf("B is adult \n"):printf("B is child \n");
    a>20? printf("Hot \n"):printf("Cold");

    return 0;
}


