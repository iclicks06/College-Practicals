#include<stdio.h>
   void main()
 {
 	int i,j;
 	int rows=4;
 	
 	for(i=0;i<=rows;i++)
 	{
 		for(j=0;j<=rows -i;j++)
 		{
 			printf("%C",'A' + i);
		 }
		printf("\n");
}   
}