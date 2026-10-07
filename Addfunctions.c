#include <stdio.h>
int add(int i, int j, int l)
{
	int k;
	k = i + j + l;
	return k;
}
int main ()
{
	int a,b,c;
	printf("Enter the value of a : ");
	scanf("%d",  &a);
	printf("Enter the value of b : ");
	scanf("%d",  &b);
	printf("Enter the value of c : ");
	scanf("%d",  &c);
	int d=add(a,b,c);
	printf("The total value of three numbers is : %d",d);
	return 0;
}