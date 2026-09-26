#include <stdio.h>
void main ()
{
	int i , n , a = 0, b = 1, temp = 0;
	printf("Enter the term: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		temp = a+b;
		printf("%d ", a);
		a = b;
		b = temp;
	}
}
