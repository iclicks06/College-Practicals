#include <stdio.h>
void main ()
{
	int i ,m, l ;
	char n;
	printf("Enter the value of n : ");
	scanf(" %d", &n);
	for (i = 1; i <= n ; i++)
	{
		printf("\n");
		for (m = n; m >= i; m--)
		{
			printf(" ");
		}
		for (m = 1; m <= i; m++)
		{
			printf("%d",i);
		}	
	}
}