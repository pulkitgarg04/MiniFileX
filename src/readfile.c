/**
 * @file readfile.c
 * @brief Reads and displays the contents of a file.
 *
 * This file contains a function to read a file character by character
 * and display its contents to the standard output.
 */

 #include <stdio.h>
 #include "readfile.h"
 
 /**
  * @brief Reads and prints the contents of the specified file.
  *
  * Opens the file in read mode and outputs each character to the console.
  * Prints an error message if the file cannot be opened.
  *
  * @param filename The name/path of the file to read.
  */
 void readFile(const char *filename) {
     FILE *fp = fopen(filename, "r");
     if (!fp) {
         perror("Error opening file for reading");
         return;
     }
 
     char ch;
 
     printf("\nContents of '%s':\n", filename);
 
     // Read and print characters until end-of-file
     while ((ch = fgetc(fp)) != EOF) {
         putchar(ch);
     }
 
     printf("\n");
 
     fclose(fp);
 } 