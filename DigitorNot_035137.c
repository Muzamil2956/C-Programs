#include<stdio.h>
int main() {
    char x;
    printf("Enter value of char :");
    scanf("%c", &x);
    if (x>='0' && x<='9')
    {
        printf("Char is Digit");
    }
        else
{
printf("Not digit ");
}
    
    
    return 0;
}