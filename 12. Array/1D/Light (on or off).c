#include <stdio.h>

int main() {
    int n;
    printf("Number of lights: ");
    scanf("%d", &n);

    int N[n];
    int sum=0;

    printf("\nEnter 1 for on and 0 for off\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < n; i++) {
        if(N[i]==1){
            sum=sum+1;
        }
        else if(N[0]==0) {
            continue;
        }
    }
    printf("On: %d", sum);
    return 0;
}




