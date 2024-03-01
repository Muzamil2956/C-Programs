// print * in pattern covers 4 rows 5 5 colums
#include<stdio.h>
int main() {
    int i, j, n, m;
    printf("Enter the no of rows :");
    scanf("%d", &n);
     printf("Enter the no of columns :");
      scanf("%d", &m);
    for( i=1; i<=n; i++)
     {
      for(j=1; j<=m; j++)
     {
      printf("*");
     }
          printf("*\n");
    }
}