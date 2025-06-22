#include<stdio.h>
int main() {
    int num[10];
    printf("Enter the numbers: \n");
    for(int i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    int position=-1;
    for(int i=0; i<5; i++) {
        if(value==num[i]) {
            position=i+1;
            break;
        }
    }
    if (position==-1) {
        printf("Not found");
        }
    else {
        printf("Position is: %d", position);
    }
    return 0;
}
