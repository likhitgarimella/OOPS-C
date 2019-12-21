/* To Display
1
2 2
3 3 3
_ _ _ _
_ _ _ _ _
   */
#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,m,n;
	printf("Enter no.of rows and columns: ");
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
	}
	getch();
}

