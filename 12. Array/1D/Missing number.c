#include <stdio.h>

int main() {

    int n, sum=0;
    int s=0;
    printf("n: ");
    scanf("%d", &n);

    int p;
    printf("Enter numbers: \n");
    for(int i=0;i<n-1; i++) {
        scanf("%d", &p);
        sum+= p;
    }

    s=(n*(n+1))/2;
    printf("Missing number is: %d ", s-sum);

    return 0;
}


