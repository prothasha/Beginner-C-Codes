#include <stdio.h>

int main() {
    int num = 64;
    while(num > 0) {
        if(num % 7 == 0) {
            printf("%d\n", num);
            num = num % 7;
        } else {
            printf("%d\n", num);
        }
        num = num / 3;
    }
    return 0;
}

