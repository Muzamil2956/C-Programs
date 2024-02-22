#include<stdio.h>
int main () {
    int number, r, temp;
    int sum = 0;
    printf("Enter Number : \n");
    scanf("%d", &number);
    temp = number;
    while (number != 0) {
        r = number % 10;
        sum = sum + ( r * r* r);
        number = number / 10;
    }
    if ( sum == temp) {
        printf(" Armstrong");
    }
     else {
        printf("Not Armstrong");
     }
    
}