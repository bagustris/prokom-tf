#include <iostream.h>

using namespace std;

void recurse ( int count )  {
    cout <<count;
    recurse ( count + 1 );
}

int main() {
  recurse ( 1 );
  return 0;
}
