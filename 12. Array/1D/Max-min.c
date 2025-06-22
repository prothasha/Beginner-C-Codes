#include<stdio.h>
int main() {
    int marks[5];
    int max, min;
    printf("Enter numbers: \n");
    for(int i=0; i<5; i++) {
        scanf("%d", &marks[i]);
    }
    max = min = marks[0];

    for(int i=0; i<5; i++) {
        if(max<marks[i]) {
            max = marks[i];
        }
    }

    for(int i=0; i<5; i++) {
        if(min>marks[i]) {
            min = marks[i];
        }
    }
    printf("\n");
    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}
