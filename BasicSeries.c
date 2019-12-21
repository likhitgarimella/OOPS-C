/* To Display
1 2 3 _ _ _ _
1 2 3 _ _ _ _
1 2 3 _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
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
		for (j=1;j<=n;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}

