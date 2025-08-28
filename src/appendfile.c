/**
 * @file appendfile.c
 * @brief Appends text to an existing file.
 *
 * This file contains a function to append user-provided text to a file.
 * If the file does not exist, fopen() in append mode will create it.
 */

 #include <stdio.h>
 #include "appendfile.h"

 /**
  * @brief Appends user input to the specified file.
  *
  * Opens the file in append mode, reads a line of text from the user,
  * and writes it to the end of the file.
  *
  * @param filename The name of the file to append data to.
  */
 void appendFile(const char *filename) {
     FILE *fp = fopen(filename, "a");
     if (fp == NULL) {
         perror("Error opening file for appending");
         return;
     }
 
     char data[200]; // Buffer to store user input
 
     printf("Enter text to append (end with ENTER):\n");
 
     getchar(); // Clear leftover newline from previous input
     fgets(data, sizeof(data), stdin); // Read a line of text from user
     fputs(data, fp);                  // Append the text to the file
 
     printf("Data appended to '%s'\n", filename);
 
     fclose(fp);
 } 