/* Here We will calculate area of a square with side given*/
#include<stdio.h>
int main(){
    int side;
    printf("Enter side of a square :");
    scanf("%d", &side);
    int area = side*side;
    printf("Area of a square is : %d", area);
    return 0;
}