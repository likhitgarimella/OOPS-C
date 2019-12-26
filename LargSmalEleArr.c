#include<stdio.h>

int main()
{
    int a[50], size, i, big, small;
    
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter the %d elements of the array: \n", size);
    
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    big = a[0]; // Initializing
    // From 2nd element to the last element, find the bigger element than 'big'
    // And then, update the value of 'big'
    
    for(i = 1; i < size; i++)
    {
        if(big < a[i])   // if larger value is encountered
        {
            big = a[i]; // update the value of big
        }
    }
    printf("\nThe largest element is: %d", big);

    small = a[0];   // Initializing
    // From 2nd element to the last element, find the smaller element than 'small'
    // And then, update the value of 'small'
    
    for(i = 1; i < size; i++)
    {
        if(small > a[i])   // if smaller value is encountered
        {
            small = a[i];   // update the value of small
        }
    }
    
    printf("\nThe smallest element is: %d", small);
    return 0;
}
