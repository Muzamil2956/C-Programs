/* Here We will calculate area of a Circle with radius given*/
#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of a circle :");
    scanf("%f", &radius);
    float area = 3.14*radius*radius;
    printf("Area of a circle is : %f", area);
    return 0;
}