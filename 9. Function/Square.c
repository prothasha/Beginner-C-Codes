#include<stdio.h>

int square (int side){
    printf("Area: %d", side*side);
}
int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    square(a);
}

//Another process
/*
#include<stdio.h>

int square(int a) {
    return a*a;
}
int main() {
    int nmbr;
    printf("Enter the nmbr: ");
    scanf("%d", &nmbr);
    int ans=square(nmbr);
    printf("Square of the nmbr is: %d", ans);
}
*/
