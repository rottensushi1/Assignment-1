#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1 Refactor
//Item 1: Use the printf function to print a user-input name to the screen 3 ways

//************************USE GETCHAR

int main(void)
{
	char* firstName, lastName;						//use getchar in a loop to save chars as word

	printf("Please enter your First Name: ");

	//fgets(firstName, 10, stdin);

	printf("Please enter your Last Name: ");

	fgets(lastName, 10, stdin);
	
	printf(" %s %s", firstName, lastName);			//use one printf() call to print your first name and last name on one line

	//printf(" \n%c\n%c", firstName, lastName);		//use a second printf() call to print your first and last name on two separate lines

	//printf("\n %c ", firstName);					//uses a pair of printf() calls to print your first and last names on one line
	//printf(" %c\n", lastName);

	return 0;
}