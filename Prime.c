#include <stdio.h>
int main ()
{
	int i , n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	if(n % 2 != 0 || n % 3 != 0)
	{
		printf("The number is prime %d", n);
		}
	else 
	{
		printf("\nThe number is non prime %d", n);	
	}

}
