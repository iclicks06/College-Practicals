#include <stdio.h>
int main()
{
	int in,t,temp = 0;
	printf("Enter the value : ");
	scanf("%d", &in);
	t = in;
	while (t!=0)
	{
		temp += t%10;
		t = t/10;
		
	}
	printf("%d", temp);
	return 0;
}
