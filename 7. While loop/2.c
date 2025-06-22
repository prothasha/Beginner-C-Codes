#include <stdio.h>

int main() {
    int num = 64;
    while(num > 0){
        printf("%d\n", num);
        num = num / 2;
    }
    return 0;
}

