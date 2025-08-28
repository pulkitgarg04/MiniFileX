#include <stdio.h>
#include "writefile.h"

void writeFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }
    char data[200];
    printf("Enter text to write (end with ENTER):\n");
    getchar(); // clear newline
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    printf("Data written to '%s'\n", filename);
    fclose(fp);
}

