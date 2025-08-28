/**
 * @file createfile.c
 * @brief Creates a new empty file.
 *
 * This file contains a function to create an empty file with the given
 * name. If the file already exists, it will be truncated to zero length.
 */

 #include <stdio.h>
 #include "createfile.h"
 
 /**
  * @brief Creates a new file with the specified name.
  *
  * Opens the file in write mode, which creates the file if it does not exist.
  * If the file cannot be created, prints an error message.
  *
  * @param filename The name/path of the file to create.
  */
 void createFile(const char *filename) {
     // Open file in write mode; creates file if it doesn't exist
     FILE *fp = fopen(filename, "w");
     if (fp == NULL) {
         perror("Error creating file");
         return;
     }
 
     printf("File '%s' created successfully!\n", filename);
 
     fclose(fp);
 } 