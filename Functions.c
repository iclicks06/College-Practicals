#include <stdio.h>
int ops( int i, int j)
	{
		int k,m,n,a ;
		k = i + j;
		m = i * j;
		n = i / j;
		a = i - j;
		printf("%d\n", k);
		printf("%d\n", m);
		printf("%d\n", n);
		printf("%d\n", a);
		
	}
	
int main ()
{
	int b,c;
	printf("Enter the value of b : ");
	scanf("%d", &b);
	printf("Enter the value of c : ");
	scanf("%d", &c);
	int f = ops(b,c);
	
	return 0;
}
