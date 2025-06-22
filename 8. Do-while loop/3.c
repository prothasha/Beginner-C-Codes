#include <stdio.h>
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Addition selected.\n");
                break;
            case 2:
                printf("Subtraction selected.\n");
                break;
            case 3:
                printf("Multiplication selected.\n");
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 4);
    return 0;
}

