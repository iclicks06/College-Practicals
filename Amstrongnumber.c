#include <stdio.h>
int main ()
{
	int temp ,i, n, as;
	printf("Enter the value : ");
	scanf("%d", &n);
	for (i=1; n!=0; n=n/10)
	{
		temp = (n*n*n) + (n%10* (n*n*n));
	}
	printf("%d", temp);
	return 0;
}
