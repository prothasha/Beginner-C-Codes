/*  Operator Precedence: 
       ! 
    *, /, %
      +, -
    <,<=,>,>=
      ==,!=
        &&
        ||
         =    */

#include<stdio.h>

int main() {
    
    int a = 4 + 9 * 10;
    int b = 4 * 3 / 6 * 2; //Associativity (Left to right)
    int c = 5 * 2 - 2 * 3;
    int d = 5 * 2 / 2 * 3;
    int e = 5 * (2 / 2) * 3;
    int f = 5 + 2 / 2 * 3;

    printf("a is: %d\n", a);
    printf("b is: %d\n", b);
    printf("c is: %d\n", c);
    printf("d is: %d\n", d);
    printf("e is: %d\n", e);
    printf("f is: %d\n", f);

    return 0;
}