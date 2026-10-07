#include <stdio.h>
int factorial(int n)
{
	int i;
	int j = 1;
	for(i=1; i<=n; i++)
	{
		j = j* i;
	}
	
	return j;
	
}
int main ()
{
	int a ;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	
	printf("%d", factorial(a));
	return 0;
}