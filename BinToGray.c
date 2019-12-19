//C Program to Convert Binary Code of a Number into its Equivalent Gray's Code using Recursion.
//The speciality of gray code is that, only one bit is changed in 2 consecutive numbers, say 3 and 4.
#include <stdio.h>
 
int bintogray(int);
int main ()
{
    int bin, gray;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    gray = bintogray(bin);
    printf("The gray code of %d is %d\n", bin, gray);
    return 0;
}
 
int bintogray(int bin)
{
    int a, b, result = 0, i = 0;
    if (!bin)
    {
        return 0;
    }
    else
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            return (1 + 10 * bintogray(bin));
        }
        else
        {
            return (10 * bintogray(bin));
        }
    }
}
