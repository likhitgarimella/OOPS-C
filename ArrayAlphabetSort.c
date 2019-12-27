//C program to read N names, Store them in an Array.
//Sort them in Alphabetical order & Output the given names in sorted order.

#include <stdio.h>
#include <string.h>	// Defines strcpy() & strcmp() functions below.

void main()
{
    char name[10][8], tname[10][8], temp[8];
    int i, j, n;
 
    printf("\nEnter the value of n \n");
    scanf("%d", &n);
    printf("\nEnter %d names n \n", n);
 
    for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
// The strcpy() function copies the string to another character array.
// And returns the copied array.
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
// The strcmp() compares two strings character by character.
// If the 1st character of two strings is equal, the next character of two strings is compared.
// This continues until the corresponding characters of two strings are different.
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
    printf("\nInput Names\tSorted names\n");
    for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
}

