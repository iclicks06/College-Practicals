//fibonaci series by recursion

#include<stdio.h>

void fibonaci (int n){


int j =1, i, k=0;

int fib;

for(i=0; i<= n; i++){



fib = k + j;

printf("%d", k);


j = fib;

}



int main (){

int a;

printf("Enter the value of a : ");

scanf("%d", &a);

fibonaci(a);

return 0;}