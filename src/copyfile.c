#include <stdio.h>
#include "copyfile.h"

void copyFile(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    if (!src) {
        perror("Error opening source file");
        return;
    }
    FILE *dest = fopen(destination, "w");
    if (!dest) {
        perror("Error opening destination file");
        fclose(src);
        return;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied from '%s' to '%s'\n", source, destination);
    fclose(src);
    fclose(dest);
}

