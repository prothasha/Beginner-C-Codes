#include<stdio.h>
#include<math.h>

float p(int a, int b) {
    float result = pow(a, b);
    printf("%d ^ %d = %.2f\n", a, b, result);
    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        p(i, n);
    }
    return 0;
}
