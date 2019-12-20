//C program to illustrate how user authentication is done.
//Program asks for the user name and password.
//Displays the password as '*' character.
//Print the array password[] as output and exit.

#include <stdio.h>
 
void main()
{
	char username[20], password[20], ch;
	int i;
	printf("Enter Username: ");
	gets(username);
	printf("Enter the password < any 10 characters>: ");
	for (i = 0; i < 10; i++)
	{
            ch = getchar();
            password[i] = ch;
            ch = '*' ;
            printf("%c", ch);
	}
        password[i] = '\0';
	//Original password can be printed, if needed.
	printf("\n Your password is :");
	for (i = 0; i < 10; i++)
	{
            printf("%c", password[i]);
	}
}

