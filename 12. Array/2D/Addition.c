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
    int B[r][c];
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("[%d][%d]=",i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }



    printf("\nMatrix A: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }



    int C[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\nMatrix A+B=C: \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}


