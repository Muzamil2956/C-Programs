#include<stdio.h>
int main() {
    int n;
    int factorial = 1;
    printf("Enter value of n :");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
    factorial = factorial*i;
    }
    printf("Factorial is %d", factorial);
}