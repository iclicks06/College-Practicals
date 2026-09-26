//Write the program to find out the maximum and minimum number from the given 10
#include <stdio.h>
int main ()
{
    int i, max, min;
    int numbers[10];
    
    printf("Enter the 10 numbers: \n");
    for(i = 0; i < 10; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];
    
    for (i = 1; i < 10; i++)
    if (numbers[i] > max)
    {
        max = numbers[i];
    }
    if (numbers[i] < min)
    {
        min = numbers[i];
        
    }
    
    printf("\n Maximum number is %d \n", max);
    printf("Minmum number is %d \n", min);
 return 0 ;   
}
