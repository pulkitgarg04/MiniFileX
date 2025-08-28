#include <stdio.h>
#include <stdlib.h>
#include "createfile.h"
#include "writefile.h"
#include "appendfile.h"
#include "copyfile.h"
#include "readfile.h"

int main() {
    int choice;
    char file1[50], file2[50];

    while (1) {
        printf("\n===== Mini File Management System =====\n");
        printf("1. Create File\n");
        printf("2. Write File\n");
        printf("3. Append File\n");
        printf("4. Copy File\n");
        printf("5. Read File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter filename: ");
                scanf("%s", file1);
                createFile(file1);
                break;
            case 2:
                printf("Enter filename: ");
                scanf("%s", file1);
                writeFile(file1);
                break;
            case 3:
                printf("Enter filename: ");
                scanf("%s", file1);
                appendFile(file1);
                break;
            case 4:
                printf("Enter source filename: ");
                scanf("%s", file1);
                printf("Enter destination filename: ");
                scanf("%s", file2);
                copyFile(file1, file2);
                break;
            case 5:
                printf("Enter filename: ");
                scanf("%s", file1);
                readFile(file1);
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, try again.\n");
        }
    }
}

