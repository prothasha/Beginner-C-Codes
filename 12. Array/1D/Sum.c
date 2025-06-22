#include<stdio.h>
int main() {
    int marks[5];
    int sum=0;
    printf("Enter numbers: \n");
    for(int i=0; i<5; i++) {
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<5; i++) {
        sum=sum+marks[i];
    }
    printf("%d", sum);
    return 0;
}
