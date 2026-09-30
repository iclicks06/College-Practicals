//Parlindrome number
#include <stdio.h>
int main ()
{
	int i, rev=0, n, n1;
	printf("Enter the number : ");
	scanf("%d", &n);
	n1 = n;
	for (i = 1; n!=0 ; n=n/10)
	{
		rev = 10 * rev + (n%10);
		printf("%d\n", rev);	
	}
	
	
	if (n1 == rev)
	{
		printf("\nThe number is Palindrome");
	}
	if(n1 != rev)
	{
		printf("\nThe number is not palindrome");
	}
	return 0 ;
}
