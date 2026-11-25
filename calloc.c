#include <stdio.h>
int main(){
	int *marks;
	int i;
	marks = (int*)calloc(5,sizeof(int));
	if(marks == NULL ){
		printf("Memory allocation failed");
		return 1;
	}
	printf("Initial values : \n");
	for (i=0;i <5; i++){
		printf("%d", marks[i]);
	}
	//assign marks
	marks[0] = 75;
	marks[1] = 80;
	marks[2] = 85;
	marks[3] = 90;
	marks[4] = 85;
	printf("\nstudents marks: \n");
	for(i = 0; i <5; i++){
		printf("%d\n", marks[i]);
	}	
	free (marks);
	return 0;
	
}