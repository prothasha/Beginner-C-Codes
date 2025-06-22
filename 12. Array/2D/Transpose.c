#include<stdio.h>
int main() {

    int r, c;
    printf("Enter the size of row and column: \n");
    scanf("%d %d", &r, &c);
    printf("Number of elements: %d * %d", r,  c);

    int A[r][c];
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("[%d][%d]=",i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nMatrix A: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    int B[r][c];
    printf("\nTranspose Matrix of A: \n");
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            B[i][j]=A[j][i];
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}


