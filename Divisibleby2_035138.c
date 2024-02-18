#include<stdio.h>
int main() {
    int x;
    printf("Enter value of x :");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);//even 1    odd 0
    return 0;
}