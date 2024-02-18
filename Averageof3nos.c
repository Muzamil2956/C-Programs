#include<stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf ("Enter value of x\n" );
    scanf("%d", &x);
     printf ("Enter value of y\n" );
     scanf("%d", &y);
       printf ("Enter value of z\n");
       scanf("%d", &z);
       int sum = x + y + z;
    int Average = sum / 3;
    printf ("Average is : %d", Average);
    return 0;

}
