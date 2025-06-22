#include <stdio.h>

int main() {
    int x, num;

    printf("Enter last number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (x = 2; x <= num / 2; x++) {
        if (num % x == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}
