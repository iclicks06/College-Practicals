#include <stdio.h>
int main ()
{
	int i, j , n;
	for (i=1; i <=5; i++)
	{
		for (j=1; j<= 5; j++)
		{
			
			if(i == 1 || i == 5 )
			{
				printf("%d", j);	
			}
			else if (j == 1 || j == 5)
			{
				printf("%d", j);
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
