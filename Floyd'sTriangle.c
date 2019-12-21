/* To Display a Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main() 
{
    int rows,i,j,num=1;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for (i=1; i<=rows; i++) 
	{
        for (j=1; j<=i; j++)
        { 
			printf("%d ",num);
          	num++;
        }
        printf("\n");
    }
    return 0;
}

