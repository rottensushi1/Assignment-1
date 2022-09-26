#include <stdio.h>
//Taiyo Suzuki
//Sept 23, 2022
//Item 3: Prompt the user to input two floats and output their sum, product, and quotient


//MAKE SCANF IGNORE LETTERS

int main(void) 
{
	float numInput1, numInput2;																//create float variables to hold numbers

	printf("Please type first number and press enter:");									//prompt user to enter first number

	scanf_s("%f", &numInput1);																//scan for and save first number

	printf("First number: %f\n\nPlease type second number and press enter:", numInput1);	//display first number and prompt user for second number

	scanf_s("%f", &numInput2);																//scan for and save second number

	printf("Second number: %f", numInput2);													//display second number

	float sum = numInput1 + numInput2;														//calculate sum, product, and quotient from user-input numbers
	float product = numInput1 * numInput2;
	float quotient = numInput1 / numInput2;

	printf("\n\nSum = %f\nProduct = %f\nQuotient = %f\n", sum, product, quotient);			//display sum, product, and quotient to screen

	return 0;
}