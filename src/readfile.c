#include <stdio.h>
#include "readfile.h"

void readFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file for reading");
        return;
    }
    char ch;
    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(fp);
}

