#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1 Refactor
//Item 3: Prompt the user to input two floats and output their sum, product, and quotient

int main(void) 
{
	float numInput1 = 0, numInput2 = 0;													//create and initialize float variables to compare to input

	printf("Please enter first number: ");												//prompt user to enter first number

	if (scanf_s("%f", &numInput1) == 0)													//scan for user input and check if it is a float, and if it is, save it
	{
		printf("\nInput not recognised as a valid float, please try again.\n");			//if it is not a float, exit the program
		exit(0);
	}															

	printf("First number: %f\n\nPlease enter second number: ", numInput1);				//display first number and prompt user for second number

	if (scanf_s("%f", &numInput2) == 0)													//scan for user input and check if it is a float, and if it is, save it
	{
		printf("\nInput not recognised as a valid float, please try again.\n");			//if it is not a float, exit the program
		exit(0);
	}																

	printf("Second number: %f", numInput2);												//display second number

	float sum = numInput1 + numInput2;													//calculate sum, product, and quotient from user-input numbers
	float product = numInput1 * numInput2;
	float quotient = numInput1 / numInput2;

	printf("\n\nSum = %f\nProduct = %f\nQuotient = %f\n", sum, product, quotient);		//display sum, product, and quotient to screen

	return 0;
}