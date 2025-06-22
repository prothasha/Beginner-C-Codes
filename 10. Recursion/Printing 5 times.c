#include <stdio.h>

int hi(int count) {
    if (count == 0)
        return 0;
    printf("Hello World\n");
    hi(count-1);
    return 0;
}

int main() {
    hi(10);
    return 0;
}
