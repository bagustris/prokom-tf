// demostrate recursive function
#include <stdio.h>

void recurse ( int count )
{
    printf( "%d\n", count );
    //if(count < 100)
    recurse ( count + 1 );
}

int main()
{
  recurse ( 1 );
  return 0;
}
