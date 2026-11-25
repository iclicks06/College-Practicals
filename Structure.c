/*Structure:- It is a user defined data type that allows user to store different 
types of data under 1 name 
Syntax:- struct structure name
	{
		data type member 1;
		data type member 2;
		data type member 3;
	};
*/
#include <stdio.h>

	struct student 
	{
		int rollno;
		char name[30];
		float marks;
	};
	int main ()
	{
		struct student f ;
		printf("Enter roll no : \n");
		scanf("%d", &f.rollno);
		printf("Enter name : ");
		scanf("%s", &f.name);
		printf("Enter the marks: ");
		scanf("%f", &f.marks);
		//Display
		printf("\n student detail\n");
		printf("\n %d\n", f.rollno );
		printf("\n %s\n", f.name);
		printf("\n %f\n", f.marks);
		return 0;
	}
