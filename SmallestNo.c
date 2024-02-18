#include<stdio.h>
int main() {
int x, y, small;
printf("Enter value of x\n");
scanf("%d", &x);
printf("Enter value of y\n");
scanf("%d", &y);
if ( x < y)
small = x;
else 
 small = y;
    printf("Smallest number is : %d", small); 
return 0;
}