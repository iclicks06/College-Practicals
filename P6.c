#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{
	int num;
	printf("Enter your choice of number ");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("the number is equal to zero ");
	}
	else if (num >= 0)
	{
		printf("the number is greater than zero & positive  ");
		
	}
	else 
	{
		printf("the number is negative or less than zero ");
		
	}
	return 0 ;
}