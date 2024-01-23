#include "lib/print_file.h"
#include "lib/file_text.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *path = malloc(256);
    system("clear");

    printf("****************************\n");
    printf("* Linux Programming Helper *\n");
    printf("* ------ By Leander ------ *\n");
    printf("****************************\n\n");

    printf("Please enter file path > ");
    scanf("%s", path);

    printf("Enter the number of libraries you want to include: ");
    int numLibraries;
    scanf("%d", &numLibraries);
    char **libraries = malloc(numLibraries * sizeof(char *));
    for (int i = 0; i < numLibraries; i++) {
        libraries[i] = malloc(256);
        printf("Enter library #%d: ", i + 1);
        scanf("%s", libraries[i]);
    }

    FILE *file = fopen(path, "w");
    if (file != NULL) {
        print_to_file(file, path, libraries, numLibraries);
        fclose(file);
        printf("File %s created successfully!\n", path);
    } else {
        printf("Error creating the file.\n");
    }

    for (int i = 0; i < numLibraries; i++) {
        free(libraries[i]);
    }

    free(libraries);
    free(path);
    return 0;
}

