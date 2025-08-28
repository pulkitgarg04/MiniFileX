/**
 * @file writefile.c
 * @brief Writes text to a file, overwriting existing content.
 *
 * This file contains a function to write user-provided text to a file.
 * If the file already exists, its contents will be overwritten.
 */

 #include <stdio.h>
 #include "writefile.h"
 
 /**
  * @brief Writes user input to the specified file.
  *
  * Opens the file in write mode, reads a line of text from the user,
  * and writes it to the file, replacing any existing content.
  *
  * @param filename The name/path of the file to write to.
  */
 void writeFile(const char *filename) {
     // Open the file in write mode; creates file if it doesn't exist
     FILE *fp = fopen(filename, "w");
     if (fp == NULL) {
         perror("Error opening file for writing");
         return;
     }
 
     char data[200]; // Buffer to store user input
 
     printf("Enter text to write (end with ENTER):\n");
 
     getchar(); // Clear leftover newline from previous input
     fgets(data, sizeof(data), stdin); // Read a line of text from user
     fputs(data, fp);                  // Write the text to the file
 
     printf("Data written to '%s'\n", filename);
 
     fclose(fp);
 } 