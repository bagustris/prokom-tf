#include <stdio.h>
double max(double param1, double param2);
void print_happy_birthday(int age);
    
int main()
{
 max(10, 5);
 //printf("Max is %e ", max);
 print_happy_birthday(25);
}
double max (double param1, double param2)
{
   // this is the name, followed by the parameters 
   if (param1 > param2) 
     {
       return param1;  // that param1 is of type double and the return 
                        // type is also of type double 
     } 
   else 
     { 
       return param2; 
     }
} 
 
 
 
// This is the return type (void means no value is computed and returned by the function!) 
void print_happy_birthday( int age ) 
{ 
   printf("Congratulations on your %d th Birthday\n", age); 
   return;  // you can "terminate" a void function by using return. 
}
