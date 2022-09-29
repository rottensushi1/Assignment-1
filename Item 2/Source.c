#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 1 Refactor
//Item 2: Convert a user-input age in years to days and display both values

//definitions
#define DAYS_IN_YEAR 365												//define how many days are in one year

int main(void) 
{
	int ageYears;													

	printf("Enter your age in years: ");								

	scanf_s("%d", &ageYears);											//scan for and save age input in years

	int ageDays = ageYears * DAYS_IN_YEAR;								//calculate age in days from age in years

	printf("\nYou are %d years or %d days old.\n", ageYears, ageDays);	//print age to screen in years and days
	return 0;
}