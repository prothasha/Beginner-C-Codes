#include <stdio.h>

int main() {
    int r=3, c=3, mat[3][3];

    printf("Enter 3x3 matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &mat[i][j]);

    // Row sums
    printf("Row sums:\n");
    for(int i=0; i<r; i++) {
        int sum=0;
        for(int j=0; j<c; j++)
            sum += mat[i][j];
        printf("Row %d: %d\n", i+1, sum);
    }

    // Column sums
    printf("Column sums:\n");
    for(int j=0; j<c; j++) {
        int sum=0;
        for(int i=0; i<r; i++)
            sum += mat[i][j];
        printf("Col %d: %d\n", j+1, sum);
    }

    return 0;
}

