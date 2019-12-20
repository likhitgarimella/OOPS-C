//C Program to Extract Last two Digits of a given number
#include <stdio.h>
 
int main()
{
    int num, dig;
 
    printf("Enter the year ");
    scanf("%d", &num);
    
    dig = num % 100;	//Divide with 10^k to extract last k digits.
    printf("Last two digits of year is: %d", dig);
    return 0;
}

