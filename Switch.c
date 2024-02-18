#include<stdio.h> //1 is Monday...... 
int main() {
    int Day;
    printf("Enter day : ");
    scanf("%d", &Day);
    switch(Day) {
        case 1: printf("Monday");
        break;
    
        case 2: printf("Tuesday");
        break;
    
        case 3: printf("Wednesday");
        break;
    
        case 4: printf("Thursday");
        break;
    
        case 5: printf("Friday");
        break;
    
        case 6: printf("Saturday");
        break;
    
        case 7: printf("Sunday");
        break;
    
    default: printf(" Enter Number from 1 to 7");
}
return 0;
}