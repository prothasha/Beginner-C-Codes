#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}

