// print the table in reverse of a no
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter number :");
    scanf("%d", &n);
    for(i=10; i>=1; i--) {
        printf("%d\n", n*i);
    }
}