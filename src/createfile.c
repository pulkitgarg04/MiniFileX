#include <stdio.h>
#include "createfile.h"

void createFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error creating file");
        return;
    }
    printf("File '%s' created successfully!\n", filename);
    fclose(fp);
}

