#include <stdio.h>
int main ()
{
	int i, j , k ,l ;
	printf("Enter the value you wanna reverse : ");
	scanf("%d", &i);
	
	for (j = 1; i!= 0; i = i/10)
	{
		l = (10*l) + (i %10);
		 
	}
	printf("The reversed of given no is : %d", l);
	return 0 ;
}
