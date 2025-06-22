#include <stdio.h>

int main() {
    int arr[10], num, c=0;
    printf("How many numbers? ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0, j=num-1; i<num, j>=0; i++, j--) {
        if(arr[i]!=arr[j]){
            printf("No");
            break;
        }
        else {
            c=c+1;
        }
    }
    if (c==num) {
        printf("Yes");
    }


    return 0;
}

