/*C program to print Pascal’s Triangle.
The triangle starts with a number “1” above.
Any new number added below the upper number “1” is,
just the sum of the two numbers above, except for the edge, which is all “1”.
*/
#include <stdio.h>
int main()
{
int rows, coef = 1, space, i, j;
printf("\nEnter the number of rows: ");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");

for(j=0; j <= i; j++)
{
	if (j==0 || i==0)
	coef = 1;
	else
	coef = coef*(i-j+1)/j;
	printf("%2d", coef);
}
printf("\n");
}
return 0;
}
