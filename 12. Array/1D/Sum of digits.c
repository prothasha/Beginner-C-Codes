#include <stdio.h>

int main() {
    int num[50], sum = 0;
    int n;

    printf("Enter the number of digits: ");
    scanf("%d", &n);

    printf("Enter numbers: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        sum=sum+num[i];
    }


    printf("Sum of digits = %d\n", sum);

    return 0;
}
