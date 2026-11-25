#include <stdio.h>
int main()
{
	int i,count,in,t;
	printf("Enter the value : ");
	scanf("%d", &in);
	count = 0;

	for(t = in; t != 0; t/=10)
	{
		count++;
	}
	printf("%d", count);
	return 0;
}
