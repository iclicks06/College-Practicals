#include <stdio.h>
void main ()
{
	int i , n, sum = 1 ;
	printf("Enter the factorial you wanna print : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		printf("%d * ", n);
		sum = i * sum;	
	}
	printf("\n%d", sum);
}
