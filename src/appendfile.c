#include <stdio.h>
#include "appendfile.h"

void appendFile(const char *filename) {
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file for appending");
        return;
    }
    char data[200];
    printf("Enter text to append (end with ENTER):\n");
    getchar(); // clear newline
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    printf("Data appended to '%s'\n", filename);
    fclose(fp);
}

