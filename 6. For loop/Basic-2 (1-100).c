#include<stdio.h>
int main() {
    for(int y=1; y<=10; y=y+1) {
        printf("%d \n", y); //For space printf("%d " "", y);
    }
    return 0;
}

//User input
#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int x=0; x<=n; x++) {
        printf("%d " "", x);
    }
    return 0;
}

