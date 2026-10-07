#include <stdio.h>
int main ()
{
	float a, b, c;
	char d;
	printf("Enter the value of a:  ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);
	printf("Enter the Arethimetic operators: ");
	scanf(" %c", &d);
	switch (d)
	{
		case '+':
			c = a + b;
			printf("%f", c);
			break;
		
		case '-':
			c = a - b;
			printf("%f",c);
			break;
			
		case '*':
			c = a * b;
			printf("%f", c);
			break;
			
		case '/':
			c = a / b;
			printf("%f", c);
			break;
			
		default:
			printf("Enter the valid arithemetic operator");
	}
	return 0;
}
