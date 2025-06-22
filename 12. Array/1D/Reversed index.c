#include <stdio.h>

int main() {
    int length;

    printf("Enter the number of elements: ");
    scanf("%d", &length);

    int numbers[length];

    printf("Enter the elements of the array: \n");
    for (int i=0; i<length; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Reversed array: ");
    for (int i=length-1; i>=0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
