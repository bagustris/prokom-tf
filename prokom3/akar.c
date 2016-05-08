#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,x1,x2;
    printf("Program Persamaan Kuadrat Ax^2 + Bx + C\n");
    printf("---\n");
    printf("Masukkan A: ");
    scanf("%d", &a);
    printf("Masukkan B: ");
    scanf("%d", &b);
    printf("Masukkan C: ");
    scanf("%d", &c);
    
    d=(b*b)-(4*a*c);
    
    if ( a == 0 )
    {
        printf("Bukan persamaan kuadrat\n");
    }
    else 
    {
    	if (d == 0)
    	{
        	printf("Akar kembar\n");
        	x1=-b/(2*a);
        	printf("x1=x2= %d", x1);
    	}
    	else if (d > 0 )
   	 	{
        	x1=(-b+sqrt(d))/(2*a);
        	x2=(-b-sqrt(d))/(2*a);
        	printf("x1= %d\n", x1);
        	printf("x2= %d", x2);
    	}
    	else
    	{
        	printf("Kedua akar imajiner");
    	}
    }
    
    printf("\n");
    return 0;
}
