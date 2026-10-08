#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the length of array : ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i< n; i++)
	{
		printf("Enter the value : ");
		scanf("%d", &a[i]);
	}
	for (i=0;i<n;i++) {
	
	printf("%d ",a[i]);
	}	
	return 0; 
}

