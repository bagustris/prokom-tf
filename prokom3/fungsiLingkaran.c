/*
 * fungsiLingkaran.c: 
 *
 * 04/09/2016 10:34:10 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#define pi 3.14

double lingk(int r);

int main()
{
    int r; float luas;
    printf("Masukkan jari-jari lingkaran: ");
    scanf ("%d", &r);
    luas = lingk( r);
    printf("luas lingkaran = %.3f\n", luas);
}

double lingk(int x) {
    return pi * x * x;
}
