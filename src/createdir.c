/**
 * @file createdir.c
 * @brief Creates a new directory on Linux/macOS or Windows.
 *
 * This file contains a function to create a directory with the specified
 * name. On Linux/macOS, it uses mkdir() with permissions 0777. On Windows,
 * it uses _mkdir().
 */

 #include <stdio.h>
 #include <sys/stat.h>  // For mkdir()
 #include <sys/types.h> // For mode_t
 #include "createdir.h"
 
 /**
  * @brief Creates a directory with the given name.
  *
  * Depending on the operating system, uses the appropriate system call
  * to create a directory. Prints success or error message.
  *
  * @param dirname The name/path of the directory to create.
  */
 void createDirectory(const char *dirname) {
     int result;
 
     // Use OS-specific function to create directory
     #ifdef _WIN32
         result = _mkdir(dirname);
     #else
         result = mkdir(dirname, 0777);
     #endif
 
     if (result == 0) {
         // Directory created successfully
         printf("Directory '%s' created successfully!\n", dirname);
     } else {
         // Error creating directory
         perror("Error creating directory");
     }
 } 