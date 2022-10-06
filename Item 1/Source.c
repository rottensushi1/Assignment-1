#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1 Refactor
//Item 1: Use the printf function to print a user-input name to the screen 3 ways

//definitions
#define MAX_NAME_LENGTH 16															//max character length for names, plus one for the last value in the string
#define ELEMENT_ONE     0
#define ELEMENT_TWO     1
#define ELEMENT_THREE   2

int main(void)
{
	printf("Please enter your First Name (3-15 characters): ");						//prompt user for first name input with max. character length

	char firstName[MAX_NAME_LENGTH];												//create first name storage

	scanf_s("%s", firstName, MAX_NAME_LENGTH);										//scan for and save first name input

	if (isalpha(firstName[0]) && isalpha(firstName[1]) && isalpha(firstName[2]))	//check if first 3 letters of input is a valid alphabetic letter (and not a number or somthing else)
	{																				//for this program, if error is not in first 3 letters, most likely a good string
		printf("\nPlease enter your Last Name (3-15 characters): ");				//prompt user for last name input with max. character length

		char lastName[MAX_NAME_LENGTH];												//create last name storage

		scanf_s("%s", lastName, MAX_NAME_LENGTH);									//scan for and save last name input

		if (isalpha(lastName[0]) && isalpha(lastName[1]) && isalpha(lastName[2]))	//check if first  3 letters of input is a valid alphabetic letter (and not a number or somthing else)
		{
			printf("\n%s %s", firstName, lastName);									//use one printf() call to print your first name and last name on one line

			printf(" \n%s\n%s", firstName, lastName);								//use a second printf() call to print your first and last name on two separate lines

			printf("\n%s ", firstName);												//uses a pair of printf() calls to print your first and last names on one line
			printf("%s\n", lastName);
		}
		else
		{
			printf("\nInput is not a valid letter. Please try again.\n");			//error message for invalid letters
			exit(1);
		}
	}
	else
	{
		printf("\nInput is not a valid letter. Please try again.\n");				//error message for invalid letters
		exit(1);
	}

	return 0;
}