#include<stdio.h>
int max (int a, int b, int c) {
    if (a>b && a>c) {
        printf("Max is: %d\n", a);
    } else if (b>a && b>c) {
        printf("Max is: %d\n", b);
    } else {
        printf("Max is: %d\n", c);
    }
}
int min (int a, int b, int c) {
    if (a<b && a<c) {
        printf("Min is: %d\n", a);
    }
    else if (b<a && b<c) {
       printf("Min is: %d\n", b);
    }
    else {
        printf("Min is: %d\n", c);
    }
}
int main() {
    int n1, n2, n3;
    printf("Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max(n1, n2, n3);
    min(n1, n2, n3);
}
//Another process
/*
#include<stdio.h>
int maxa() {
    printf("A is maximum \n");
}
int mina() {
    printf("A is minimum \n");
}
int maxb() {
    printf("B is maximum \n");
}
int minb() {
    printf("B is minimum \n");
}
int maxc() {
    printf("C is maximum \n");
}
int minc() {
    printf("C is minimum \n");
}

int main() {
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c) {
        maxa();
    } else if (b>a && b>c) {
        maxb();
    } else {
        maxc();
    }

    if (a<b && a<c) {
        mina();
    }
    else if (b<a && b<c) {
       minb();
    }
    else {
        minc();
    }
    return 0;
}
*/

