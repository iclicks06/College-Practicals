//Write the program to find out the maximum and minimum number from the given 10
#include <stdio.h>
int main ()
{
	int a[10] ;
	int i , max , min ;
	
	printf("Enter the value of : ");
	for (i = 0; i < 10; i++ ){
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	min = a[0];
	
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max =a[i];
			
		}
			if (a[i] < min)
		{
			min =a[i];
			
		}
		
	}
	printf("%d", max);
	printf("%d", min);
	return 0 ;
}