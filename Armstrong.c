//C Program to Check whether a given Number is Armstrong.
//An Armstrong no is an n-digit base b number such that the sum of its
//(base b) digits raised to the power n is the number itself.
//153 => 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
#include <stdio.h>
#include <math.h>
 
void main()
{
    int num, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("Enter a number ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        num = num / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}

