#include<stdio.h>
int sum(int a){
    if(a==1){ //1 porjonto korbo tai
        return 1; //last digit 1 nibo
    }
    return a+sum(a-1);

}
int main(){
    int n=5;
    int m = sum(n);
    printf("%d", m);
}
/*sum(5) = 5 + sum(4)
       = 5 + (4 + sum(3))
       = 5 + 4 + (3 + sum(2))
       = 5 + 4 + 3 + (2 + sum(1))
       = 5 + 4 + 3 + 2 + 1
       = 15*/

