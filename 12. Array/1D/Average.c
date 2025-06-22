#include<stdio.h>
int main() {
    int marks[10];
    int n;
    float sum=0;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &marks[i]);
    }
    for(int i=1; i<=n; i++){
        sum+=marks[i];
    }
    printf("Average: %.2f", sum/n);

    return 0;
}
