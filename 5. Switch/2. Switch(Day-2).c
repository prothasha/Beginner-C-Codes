#include<stdio.h>
#include<math.h>
int main() {
    char day;
    printf("Enter case: ");
    scanf("%s", &day);
    switch(day) {
        case 'M' : printf("Monday \n");
                break;
        case 'T' : printf("Tuesday \n");
                break;
        case 'W' : printf("Wednesday \n");
                break;
        case 't' : printf("Thursday \n");
                break;
        case 'F' : printf("Friday \n");
                break;
        case 'S' : printf("Saturday \n");
                break;
        case 's' : printf("Sunday \n");
                break;
        default: printf("Invalid input"); 
    }
    return 0;
}