/***
                                     STACK

                |=====================================================|   
crazy_function: |         -------                                     |
                |       i |  5  |                                     |
                |         -------                                     | 
                |         -------                                     |
                |   i_val | 100 |                                     |
                |         -------                                     |
                |        ------------------------------------------   |
                |    per | name : |'A'| 'c'| 'e' |'\0'|  ...  |   |   |
                |        ------------------------------------------   |
                |        |  age : |            18                 |   |
                |        ------------------------------------------   |
                |        ---------                                    |
                |      a |   *-- |--------------------------------------------
                |        ---------                                    |      |
                |         -------                                     |      |
                |      n  |  5  |                                     |      |
                |         -------                                     |      |
                |=====================================================|      |
      main:     |                                                     |      |
                |                                                     |      | 
                |         --------------------------------------------------- 
                |         |                                           | 
                |        \/                                           |
                |        -----------------------                      |
                |    arr | 0 | 1 |  4 | 9 | 16 |                      |
                |        -----------------------                      |
                |         -------                                     |
                |       x | 10  |                                     |
                |         -------                                     |
                |         -------                                     |
                |       i |  5  |                                     |
                |         -------                                     | 
                |        ------------------------------------------   |
                | person | name : |'T'| 'i'| 'a' |'\0'|  ...  |   |   |
                |        ------------------------------------------   |
                |        |  age : |            21                 |   |
                |        ------------------------------------------   |
                |                                                     |
                |=====================================================| 
***/

#include <stdio.h>
#include <string.h>

struct personT {
  	char name[32];
  	int  age;
};

// a function prototype:
void crazy_function(int i_val, struct personT per, int a[], int n);

// main function:
int main() {

  	struct personT person;
  	int x, i;
  	int arr[5];

  	for(i=0; i < 5; i++) {
  	   arr[i] = i;
  	}
  	for(i=0; i < 5; i++) {
  	   printf("arr[%d] = %d\n", i, arr[i]);  // bucket values: 0 1 2 3 4 
  	}
  	x = 10;
  	strcpy(person.name, "Tia");
  	person.age = 21;
  
  	crazy_function(x, person, arr, 5);
  
  	for(i=0; i < 5; i++) {
  	   printf("arr[%d] = %d\n", i, arr[i]);   // bucket values: 0 1 4 9 16
  	}
  	printf("x = %d age = %d name = %s\n", x, person.age, person.name);  // values:  10 21 Tia
  }

// crazy function definition:
void crazy_function(int i_val, struct personT per, int a[], int n) {
  	int i;
  
  	for(i=0; i < n; i++) {
  	   a[i] = a[i]*a[i];
  	}
  	strcpy(per.name, "Ace");
  	per.age = 18;
  	i_val = 100;
  
  	//**** THE STACK IS DRAWN RIGHT BEFORE THE return STATMENT IS EXECUTED
  	return;
}
