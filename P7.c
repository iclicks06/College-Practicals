#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	float num1 , num2, num3;
	char ch;
	printf("Enter the arethmetic operator : ");
	scanf(" %c", &ch);
	
	printf("Enter the first number : \n");
	scanf("%f", &num1);
	printf("Enter the second number : \n");
	scanf("%f", &num2);
	
//	num3 = num1 + num2 ;
//	printf("%f", num3);
if (ch == '+')
	{
		num3 = num1 + num2;
		printf("You selected sum of two numbers is %f", num3);
		
	}
	else if (ch == '-')
	{
		num3 = num1 - num2;
		printf("You selected substraction of two numbers is %f", num3);
		
	}
	else if (ch == '*') 
	{
		num3 = num1*num2;
		printf("You selected multiplication of two numbers %f",num3);
		
	}
	else if (ch == '/')
	{
		num3 = num1/num2;
		printf("You selected division of two numbers %f", num3);
		
	}
	
	
	return 0 ;
}