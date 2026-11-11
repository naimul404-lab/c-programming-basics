#include <stdio.h>

int main(void) {
    FILE *file;
    char text[200];
    char line[200];

    printf("Enter a sentence to save: ");
    if (fgets(text, sizeof text, stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    file = fopen("student-notes.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    fputs(text, file);
    fclose(file);

    file = fopen("student-notes.txt", "r");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    printf("\nContent read from file:\n");
    while (fgets(line, sizeof line, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
