//C Program to Print Diamond Pattern
#include <stdio.h>
 
int main()
{
    int num, i, k, count = 1;
    printf("Enter number of rows\n");
    scanf("%d", &num);
    count = num - 1;
    for (k = 1; k <= num; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2*k - 1; i++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= num-1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2*(num - k)-1; i++)
             printf("*");
         printf("\n");
      }
      return 0;
}

