#include <stdio.h>

int main() {
    int x = 10;
    do {
        printf("This executes at least once.\n");
    } while (x < 5);  // Condition is false
    return 0;
}

