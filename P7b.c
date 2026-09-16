#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int p , c, m ;
	printf("Enter the values of your PCM marks in interger values : ");
	scanf("%d %d %d", &p, &c, &m);
	printf("your entered values are %d %d %d \n", p,c,m);
	
	if (p > 32)
	{
		printf("You are passed in physics\n");
	}
	else 
	{
		printf("You failed in physics\n");
	}
	
	if (c > 32)
	{
		printf("You are passed in chemistry\n");
	}
	else 
	{
		printf("You failed in chemistry\n");
	}
	if (m > 32)
	{
		printf("You are passed in maths\n");
	}
	else 
	{
		printf("You failed in maths\n");
	}
	
	return 0 ;
}