#include <stdio.h>

int L(char str[]) {
    int i, sum=0;
    for (i=0; str[i]!='\0'; i++) {
        sum=sum+1;
    }
    return sum;
}

int main() {
    char s[100];
    scanf("%s", s);
    int Length=L(s);
    printf("Length: %d\n", Length);

    return 0;
}


