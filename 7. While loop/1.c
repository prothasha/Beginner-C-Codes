#include <stdio.h>

int main() {
    int age = 7;
    while(age < 20) {
        if(age >= 18) {
            printf("Life is beautiful\n");
        } else {
            printf("Life is more beautiful\n");
            age++;
        }
        age++;
    }
    return 0;
}

