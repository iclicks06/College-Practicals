//write a program to calculate simple interest 
//i = p * r * n / 100 
// principle amjount r = rate of interest n = number 

#include <stdio.h>
#include <conio.h>

int main ()
{
	float r;
	int i, p, n;
	printf("Enter the principle : \n");
	scanf("%d", &p);
	printf("Enter the rate : \n");
	scanf("%f", &r);
	printf("Enter the time period : \n");
	scanf("%d", &n);

	i = (p * r * n / 100 );
	printf("The Total amount i is : %d",i);
	return 0 ;
}