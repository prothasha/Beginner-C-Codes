#include <stdio.h>

int P(int n) {
    int reversed=0, remainder, original=n;

    while (n>0) {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    if (original==reversed) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    P(num);

    return 0;
}

