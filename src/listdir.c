/**
 * @file listdir.c
 * @brief Lists the contents of a specified directory.
 *
 * This file contains a function to open a directory and print all its
 * files and subdirectories, excluding the special entries "." and "..".
 */

 #include <stdio.h>
 #include <dirent.h>   // For DIR, struct dirent, opendir, readdir, closedir
 #include <sys/stat.h> // For file info (if needed)
 #include <string.h>   // For strcmp
 #include "listdir.h"
 
 /**
  * @brief Lists all files and directories inside the specified directory.
  *
  * Opens the directory using opendir(), iterates through each entry
  * using readdir(), and prints the entry names. Skips the "." and ".."
  * entries. Prints an error message if the directory cannot be opened.
  *
  * @param dirpath The path of the directory to list.
  */
 void listDirectory(const char *dirpath) {
    // Open the directory
     DIR *dir = opendir(dirpath);
     if (!dir) {
         perror("Error opening directory");
         return;
     }
 
     struct dirent *entry; // Pointer to directory entries
 
     // Iterate through all entries in the directory
     while ((entry = readdir(dir)) != NULL) {
         // Skip the "." and ".." entries
         if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) continue;
 
         printf("%s\n", entry->d_name);
     }
 
     closedir(dir);
 } 