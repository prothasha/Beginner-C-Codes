#include<stdio.h>
int main() {

    int A[3][4]={ {10,20,30,40}, {15,25,35,45}, {60,70,80,90} };
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}
