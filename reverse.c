#include <stdio.h>
int main ()
{
	int i, rev=0, n;
	printf("Enter the number : ");
	scanf("%d", &n);
	for (i = 1; n!=0 ; n=n/10)
	{
		rev = 10 * rev + (n%10);	
	}
	printf("%d", rev);
	return 0 ;
}
