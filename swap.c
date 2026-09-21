#include <stdio.h>

int main ()
{
	int a , b  ;
	printf("Value of a \n");
	scanf("%d", &a);
	printf("Value of b \n");
	scanf("%d", &b);
	a = a + b; 
	b = a - b;
	a = a - b;
	printf("Value of a %d\n", a);
	printf("Value of b %d\n", b);
	return 0;
	
}
