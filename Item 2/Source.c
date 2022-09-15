#include <stdio.h>
//Taiyo Suzuki
//Sept 23, 2022
//Item 2: Convert your age in years to days and display both values

int main(void) 
{
	int ageYears = 19;												//age in years
	#define DAYS_IN_YEAR 365										//define how many days are in one year

	int ageDays = ageYears * DAYS_IN_YEAR;							//calculate age in days from age in years

	printf("You are %d years or %d days old", ageYears, ageDays);	//print age to screen in years and days
	return 0;
}