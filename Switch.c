//write a program to read no 1 to 7 and print relatively day sunday to saturday
#include <stdio.h>
int main ()
{
	int day;
	printf("Enter the number for the day : ");
	scanf("%d", &day);
	switch(day){
		case 1 :
			printf("Its sunday");
			break;
		
		case 2 :
			printf("Its Monday");
			break;
		
		case 3 :
			printf("Its Tuesday");
			break;
		
		case 4 :
			printf("Its Wednesday");
			break;
		
		case 5 :
			printf("Its Thursday");
			break;
			
		case 6 :
			printf("Its Friday");
			break;
		
		case 7 :
			printf("Its Saturday");
			break;
			
		default:
			printf("Its Invalid input");
	}		
	return 0;
}