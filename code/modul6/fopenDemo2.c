/*
 * fopenDemo2.c : demo fopen read
 *
 * 05/03/2016 09:58:48 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */
#include <stdio.h>
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: buka file [file ...]\n");
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        FILE* file = fopen(argv[i], "r");
        if (file == NULL) {
            printf("cat: %s: Tidak file atau directory\n", argv[i]);
            return 1;
        }
        for (int c = fgetc(file); c != EOF; c = fgetc(file)) {
            putchar(c);
        }
        fclose(file);
    }
    return 0;
}
