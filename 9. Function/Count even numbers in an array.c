#include <stdio.h>

int sum(int a[], int size) {
    int c=0;
    for (int i=0; i<size; i++) {
        if (a[i]%2==0) {
            printf("%d ",a[i]);
            c++;
        }
    }
    return c;
}

int main() {
    int x[]={1, 2, 3, 4, 5, 6, 7};
    int size=sizeof(x)/sizeof(x[0]);
    printf("\nTotal: %d", sum(x, size));
    return 0;
}

