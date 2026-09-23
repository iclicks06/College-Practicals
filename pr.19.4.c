#include<stdio.h>
   void main()
 {
 	int i,j,a;
 	for(i=1;i<=5;i++)
 	{
 		for(a=5 ;a<=i ;a--)
 		{
 			printf(" ");
		}
		 for(a=1;a<=i;a++)
 		{
 		printf("%d ",i);	
		}	
		printf("\n");
	}   
}