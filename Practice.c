// Keep taking nos from user until  user enters an odd no
#include<stdio.h>
int main() {
    int number;
    do {
    printf("Enter number :");    
    scanf("%d", &number);
    printf("%d\n", number);
    if(number % 2 !=0) {
        break;
    }

    } while(1);
    printf("Thankyou\n");
  
}