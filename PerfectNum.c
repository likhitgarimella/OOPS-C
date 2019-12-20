//C Program to Check whether a given Number is Perfect Number
//Perfect number is a number which is equal to sum of its divisors. 
//For eg, divisors of 6 are 1,2 and 3. The sum of these divisors is 6.
#include<stdio.h>
 
int main()
{
     int num, sum=0, i=1;
     printf("Enter a number to check \n");
     scanf("%d",&num);

     while(i<num) 
     {
           if(num%i==0)
           {
               sum=sum+i;
           }
           i++;
     }
     if(sum==num)
        printf("\nEntered number %d is a perfect number",i);
     else
        printf("\nEntered number %d is not a perfect number",i);
     return 0;
}

