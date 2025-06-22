#include<stdio.h>
int main() {

    int r1, c1;
    printf("Enter the size of row and column: \n");
    scanf("%d %d", &r1, &c1);
    printf("Number of elements: %d * %d\n", r1,  c1);
    int r2, c2;
    printf("Enter the size of row and column: \n");
    scanf("%d %d", &r2, &c2);
    printf("Number of elements: %d * %d\n", r2,  c2);

    while(c1!=r2) {
        printf("Error! \n");
        printf("Enter the size of row and column: \n");
        scanf("%d %d", &r1, &c1);
        printf("Number of elements: %d * %d\n", r1,  c1);
        printf("Enter the size of row and column: \n");
        scanf("%d %d", &r2, &c2);
        printf("Number of elements: %d * %d\n", r2,  c2);
    }


    int A[r1][c1];
    printf("\nEnter elements: \n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            printf("[%d][%d]=",i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    int B[r2][c2];
    printf("\nEnter elements: \n");
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
            printf("[%d][%d]=",i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }




    printf("\nMatrix A: \n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B: \n");
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }



    int sum=0;
    int C[r1][c2];
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            for(int k=0; k<r2; k++){ //k<r2 or k<c1
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
    printf("\nMatrix A*B=C: \n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}


