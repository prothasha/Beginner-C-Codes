#include<stdio.h>
int main() {
    int marks[]={80,90,88,76,44,33};
    printf("%d\n", marks[0]);
    printf("%d\n", marks[4]);
    printf("%d\n\n", marks[3]);
//Ekshathe shob print korate chaile
    for (int i=0; i<=5; i++) {
        printf("%d ", marks[i]);
    }
}


