#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, f=1;
	printf("Enter n value ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		f=f*i;
	}
	/* Using while loop:
	i=1;
	while (i<=n)
	{
		f=f*i;
		i++;
	} */
	/* Using do while loop:
	i=1;
	do
	{
		f=f*i;
		i++;
	} while (i<=n); */
	
	printf("Factorial of the given no. is %d", f);
	getch();
}

