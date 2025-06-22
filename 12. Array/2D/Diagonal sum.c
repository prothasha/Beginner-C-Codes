#include<stdio.h>
int main() {

    int r, c;
    printf("Enter the size of row and column: \n");
    scanf("%d %d", &r, &c);
    printf("Number of elements: %d * %d\n", r,  c);
    while(r!=c){
        printf("Error! \n");
        printf("Enter the size of row and column: \n");
        scanf("%d %d", &r, &c);
        printf("Number of elements: %d * %d\n", r,  c);
    }
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

    int sum=0;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(i==j) {
                sum=sum+A[i][j];
            }
        }
    }
    printf("Diagonal sum: %d", sum);
    return 0;
}
