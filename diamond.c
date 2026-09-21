#include <stdio.h>
int main ()
{
	int n , b, j;
	printf("Enter the value you wanna print : ");
	scanf("%d", &n);
	
	for (b = 1; b <= n; b++){
		printf("\n");
		for(j = n; j >= b; j--){
			printf(" ");
		}
		
		for(j = 1; j <= b; j++){
			if (j == 1 || j == b)
			{
				printf("* ");
			}
			else 
			{
				printf("  ");
			}
		}
			
	}	
	for (b = n-1; b >= 1 ; b--){
			printf("\n");
			for(j = b; j <= n-1; j++){
			printf(" ");
		}	
		
	
		for(j = b; j >= 1; j--){
			if (j == 1 || j == b)
			{
				printf(" *");
			}
			else 
			{
				printf("  ");
			}
		}
		
	}
	return 0;
}
