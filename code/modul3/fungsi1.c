#include <stdio.h>
void print_happy_birthday(int age);
    
int main()
{
 print_happy_birthday(25);
}
 
// This is the return type (void means no value is computed and returned by the function!) 
void print_happy_birthday( int age ) 
{ 
   printf("Congratulations on your %d th Birthday\n", age); 
   return;  // you can "terminate" a void function by using return. 
}
