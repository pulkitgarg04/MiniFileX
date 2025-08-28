/**
 * @file deletedir.c
 * @brief Recursive directory deletion for Linux/macOS.
 *
 * This file contains functions to delete a directory along with all its
 * contents, including files and subdirectories. It uses POSIX functions
 * such as opendir(), readdir(), unlink(), and rmdir().
 */

#include <stdio.h>
#include <errno.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include "deletedir.h"

/**
 * @brief Recursively removes a directory and its contents.
 *
 * @param path The directory path to delete.
 * @return 0 on success, -1 on failure.
 */
static int removeDirectoryRecursive(const char *path) {
    DIR *dir = opendir(path);
    
    // If directory cannot be opened, try removing directly
    if (!dir) return rmdir(path);

    struct dirent *entry;
    char fullpath[1024];

    while ((entry = readdir(dir)) != NULL) {
        // Skip "." and ".." entries
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) continue;
        
        // Construct full path for each entry
        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);
        
        // Get file information
        struct stat st;
        if (lstat(fullpath, &st) == 0) {
            // If file is a directory, recursively delete it
            if (S_ISDIR(st.st_mode)) {
                // If directory cannot be deleted, return error
                if (removeDirectoryRecursive(fullpath) != 0) {
                    closedir(dir);
                    return -1;
                }
            } else {
                // If file cannot be deleted, return error
                if (unlink(fullpath) != 0) {
                    closedir(dir);
                    return -1;
                }
            }
        }
    }

    closedir(dir);
    return rmdir(path);
}

/**
 * @brief Deletes a directory and its contents.
 *
 * @param dirname The directory path to delete.
 */
void deleteDirectory(const char *dirname) {
    // If directory cannot be deleted, return error
    if (removeDirectoryRecursive(dirname) == 0) {
        printf("Directory '%s' deleted successfully!\n", dirname);
    } else {
        perror("Error deleting directory");
    }
}