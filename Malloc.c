//write a c function to find  the sum and average of array elements.
#include <stdio.h>
int main ()
{
	int *p, i;
	p = (int*)malloc(3*sizeof (int));
	for(i = 0; i< 3;i++)
	{
		p[i]= (i+1)*10;
	}
	printf("Using malloc : \n");
	for (i=0; i<3;i++)
	{
		printf("%d", p[i]);
		
	}
	free(p);
	return 0;
}