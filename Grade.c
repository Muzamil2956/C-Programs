#include<stdio.h> 
int main() {
    int Marks;
    printf("Enter Marks\n");
    scanf("%d", &Marks);
    if (Marks <= 30) {
        printf ("C : Grade");   
    } else if (Marks > 30 && Marks <=70) {
        printf ("B : Grade");
    } else if (Marks > 70 && Marks <=90) {
        printf ("A : Grade");
    }
    else if (Marks > 90 && Marks <=100) {
        printf ("A+ : Grade");
    }
    else {
        printf("Wrong input");
    }
    return 0;
    }