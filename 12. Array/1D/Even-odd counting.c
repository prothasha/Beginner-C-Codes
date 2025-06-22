#include <stdio.h>

int main() {
    int n;
    printf("Total number: ");
    scanf("%d", &n);

    int N[n];
    int even=0;
    int odd=0;

    printf("Numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < n; i++) {
        if(N[i]%2==0) {
            even=even+1;
        }
        else {
            odd=odd+1;
        }
    }
    printf("Even: %d ", even);
    printf("Odd: %d ", odd);
    return 0;
}





