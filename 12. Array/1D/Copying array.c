#include<stdio.h>
int main() {

    int array1[5], array2[5];
    printf("Enter values of array 1: \n");
    for(int i=0; i<5; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Array 1: ");
    for(int i=0; i<5; i++) {
        printf("%d ", array1[i]);
    }

    printf("\n");
    printf("Array 2: ");
    for(int i=0; i<5; i++) {
        array2[i]=array1[i];
    }
    for(int i=0; i<5; i++) {
        printf("%d ", array2[i]);
    }
    return 0;
}
