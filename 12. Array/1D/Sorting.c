#include<stdio.h>
int main() {
    int n=6;
    int a[]={3,1,2,7,5,4};
    for (int step=0; step<n; step++) {
        for (int i=0; i<n-step-1; i++) {
            if (a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

