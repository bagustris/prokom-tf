// fungsiTidakKembali.c : Fungsi yang tidak mengembalikan nilai

#include <stdio.h>

void garis();
main()
{
printf("Ini adalah garis pertama\n");
garis();
printf("Ini adalah garis kedua\n");
garis();
printf("Ini adalah garis kedua\n");
garis();
}

void garis()
{
printf("----------------------\n");
}
