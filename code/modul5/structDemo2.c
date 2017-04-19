/* structDemod2.c
 *
 * 05/02/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#include "inv.h"


int main() {
  int ctr;
  struct invStruct item[3];

  for(ctr=0; ctr<3; ctr++)
  {
    printf("What is the manfucaturer of item #%d?\n", ctr+1);
    gets(item[ctr].manuf);
    puts("What is the model? ");
    gets(item[ctr].model);
    puts("How many gigabytes of disk space? ");
    scanf(" %d", &item[ctr].diskSpace);
    puts("How many gigabytes of memory space? ");
    scanf(" %d", &item[ctr].memSpace);
    puts("How many are they? ");
    scanf(" %d", &item[ctr].quantity);
    puts("How much does the item cost? ");
    scanf(" %f", &item[ctr].cost);
    puts("How much does the item retail for? ");
    scanf(" %f", &item[ctr].price);
    getchar();
  }
  printf("\nHere is the inventory: \n");
  for(ctr=0; ctr<3; ctr++);
  {
    printf("#%d: Manufacturer: %s", (ctr+1), item[ctr].manuf);
    printf("\nModel: %s", item[ctr].model);
    printf("\nDisk: %d megabytes\t", item[ctr].diskSpace);
    printf("\nMemory: %d megabytes\t", item[ctr].memSpace);
    printf("\nQuantity: %d units\t", item[ctr].quantity);
    printf("\nCost: USD%2.f\t", item[ctr].cost);
    printf("\nSelling Price: USD%.2f\n\n", item[ctr].price);
  }
  return 0;
}
