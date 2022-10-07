#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1 Refactor
//Item 1: Use the printf function to print a user-input name to the screen 3 ways

//definitions
#define MAX_NAME_LENGTH 16															//max character length for names, plus one for the last value in the string
#define BUFFER_LENGTH   33															//buffer is 2x max name length, plus one

int main(void)
{
	printf("Please enter your First Name (3-15 characters): ");						//prompt user for first name input with max. character length

	char firstName[MAX_NAME_LENGTH];												//create first name storage

	scanf_s("%s", firstName, MAX_NAME_LENGTH);										//scan for and save first name input

	printf("\nPlease enter your Last Name (3-15 characters): ");				//prompt user for last name input with max. character length

	char lastName[MAX_NAME_LENGTH];												//create last name storage

	scanf_s("%s", lastName, MAX_NAME_LENGTH);									//scan for and save last name input

	//snprintf(buffer, BUFFER_LENGTH, "%s %s", firstName, lastName);

	//for (int i = 0; i <= BUFFER_LENGTH; i++)
	//{
	//	if (isalpha(buffer[i]) || buffer[i] == "\0")
	//	{
	//		if character, do nothing
	//	}
	//	else 
	//	{
	//		printf("\nInput is not a valid letter. Please try again.\n");				//error message for invalid letters
	//		exit(1);
	//	}
	//}

	printf("\n%s %s", firstName, lastName);									//use one printf() call to print your first name and last name on one line

	printf(" \n%s\n%s", firstName, lastName);								//use a second printf() call to print your first and last name on two separate lines

	printf("\n%s ", firstName);												//uses a pair of printf() calls to print your first and last names on one line
	printf("%s\n", lastName);

	//printf("\nInput is not a valid letter. Please try again.\n");				//error message for invalid letters
	//exit(1);


	return 0;
}