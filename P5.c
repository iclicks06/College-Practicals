#include <stdio.h>
#include <conio.h>

int main ()
{
	float f,c;
	printf("Enter the temperature in celcius: ");
	scanf("%f", &c);
	f = 1.8 * (c + 32);
	//c = (f-32)/1.8 ;
	
	
	printf("The temperature in ferahmite is : %f", f);
	
	
	return 0 ;
}