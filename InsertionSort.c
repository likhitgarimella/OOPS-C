// Insertion Sort code
// Insertion Sort is quite similar to Bubble Sort
// With a little modification, it will arrange numbers in reverse order
#include <stdio.h>

int main()
{
  int n, array[1000], c, d, t, flag = 0;
  // A "flag" is simply a "true" or a "false"
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c = 1 ; c <= n - 1; c++) 
  {
    t = array[c];
    for (d = c - 1 ; d >= 0; d--) 
	{
      if (array[d] > t) 
	  {
        array[d+1] = array[d];
        flag = 1; // "flag" with '0' for "false" and '1' for "true"
      }
      else
        break;
    }
    if (flag)
      array[d+1] = t;
  }
  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) 
  {
    printf("%d\n", array[c]);
  }
  return 0;
}

