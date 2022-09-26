#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1
//Item 1: Use the printf function to print your name to the screen 3 ways

int main(void)
{
	printf("Taiyo Suzuki");		//use one printf() call to print your first name and last name on one line

	printf("\nTaiyo\nSuzuki");	//use a second printf() call to print your first and last name on two separate lines

	printf("\nTaiyo ");			//uses a pair of printf() calls to print your first and last names on one line
	printf("Suzuki\n");

	return 0;
}