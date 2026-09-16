// write a program to find an area of a triangle (a = h * b * 0.5) a= area 
// h = height and b = breath 

#include <stdio.h>
#include <conio.h>

int main ()
{
	float a, b, h;
	printf("Enter the height : \n");
	scanf("%f", &h);
	printf("Enter the breath : \n");
	scanf("%f", &b);
	
	a = h * b * (0.5);
	printf("The value of the area a : %f", a);
	
	return 0 ;
}