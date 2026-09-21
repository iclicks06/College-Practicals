#include <stdio.h>

int main ()
{
	int a , b , c  ;
	printf("Value of a :");
	scanf("%d", &a);
	printf("Value of b : ");
	scanf("%d", &b);
	a = a + b; 
	b = a - b;
	c = a - b;
	printf("Value of a %d\n", c);
	printf("Value of b %d\n", b);
	return 0;
	
}
