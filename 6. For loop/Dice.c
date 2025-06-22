#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int x, y;
    for(int i=0; i<t; i++) {
        scanf("%d %d", &x, &y);

        int c=x+y;
        if (c<=6) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
}

