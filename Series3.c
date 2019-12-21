/* To Display
1
2 3
3 4 5
4 5 6 7
_ _ _ _ _
   */
#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,n;
	printf("Enter no.of rows: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=0;j<i;j++)
		{
			printf("%2d",i+j);
		}
		printf("\n");
	}
	getch();
}

