#include<stdio.h>
int main() {
    int marks[5];
    printf("Enter marks: \n");
    for(int i=0; i<5; i++) {
        scanf("%d", &marks[i]);
    }
    for (int i=0; i<5; i++) {
        if (marks[i]%2==0) {
            printf("Even : ");
            printf("%d \n", marks[i]);
        }
        else {
            printf("Odd  : ");
            printf("%d \n", marks[i]);
        }
    }
}

