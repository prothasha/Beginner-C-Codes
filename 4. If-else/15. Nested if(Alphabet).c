#include<stdio.h>
int main() {

    char alphabet;
    printf("Enter the alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet>='A' && alphabet<='Z'){
        if (alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U' ) {
            printf("Capital letter \n");
            printf("Vowel\n");
        } else {
            printf("Capital letter \n");
            printf("Consonant\n");
        }
    }
    else if (alphabet>='a' && alphabet<='z'){
        if (alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' ) {
            printf("Small letter \n");
            printf("Vowel \n");
        } else {
            printf("Small letter \n");
            printf("Consonant\n");
        }
    }
    else {
        printf("Invalid input");
    }
    return 0;
}