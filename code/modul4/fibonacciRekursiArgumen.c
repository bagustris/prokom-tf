#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int);
 
int main(int argc, char* argv[])
{
   int n=atoi(argv[1]), i = 0, c;		//convert string to int
   //printf("%d \n", n);				//just to check
	   printf("Fibonacci series\n");
	 
	   for (c = 1; c <= n; c++)
	   {
		  printf("%d\n", Fibonacci(i));
		  i++; 
	   }
   return 0;
}
 
int Fibonacci(int n)
{
   if (n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else
      return (Fibonacci(n-1) + Fibonacci(n-2));
} 
