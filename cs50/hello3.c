/** hello3.c
 * demonstrate the use of CS50 library and func GetString
 * 09/24/2013
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("Nama: ");
  string name= GetString();
  printf("Hello,%s\n", name);
}
