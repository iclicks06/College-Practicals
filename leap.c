#include <stdio.h>
int main ()
{
	int year ;
	printf("Enter the year you wanna check : ");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		printf("year is the leap year");
	}
	else 
	{
		printf("Year is not a leap year");
	}
	return 0;
}
