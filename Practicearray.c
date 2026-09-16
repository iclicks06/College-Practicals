// Write a program to find out which number is even or odd from the list of 10 numbers 
#include <stdio.h>
int main ()
{
	int i , a[10];
	printf("Enter the value of : ");
	for (i = 20; i < 30; i++ ){
		scanf("%d", &a[i]);
	}
	
	for (i = 20; i < 30; i++ ){
		if (a[i] % 2 == 0)
		{
			printf("The value is even\n");
		}	
		if (a[i] % 2 != 0)
		{
			printf("The value is odd\n");
		}	
	}
	return 0;
}