#include <stdio.h>

int main(){
    int a[10];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int max=a[0];
    int second_max = a[0];
    int third=a[0];

    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    for (int i=0; i<n; i++) {
        if (a[i]==max) {
            continue;
        }
        if(a[i]>second_max) {
            second_max=a[i];
        }
    }
    for (int i=0; i<n; i++) {
        if (a[i]==max) {
            continue;
        }
        if(a[i]==second_max) {
            continue;
        }
        if(a[i]>third) {
            third=a[i];
        }
    }
    printf("Third largest: %d",third);

}


