#include<stdio.h>
int main() {
    char alphabet;
    printf("Enter the alphabet: ");
    scanf("%c", &alphabet);
    if (alphabet>='A' && alphabet<='Z') {
        printf("Capital letter");
    }
    else if (alphabet>='a' && alphabet<='z') {
        printf("Small letter");
    }
    else {
        printf("Invalid input");
    }
}