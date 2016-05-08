/**
 * hello-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to whomever.
 *
 * Demonstrates use of CS50's library and standard input.
 */

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    printf("Masukkan nama anda: ");
    string name = GetString();
    printf("hello, %s\n", name);
}
