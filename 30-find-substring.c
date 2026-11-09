#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    char search[100];

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the word to search: ");
    fgets(search, sizeof(search), stdin);

    text[strcspn(text, "\n")] = '\0';
    search[strcspn(search, "\n")] = '\0';

    if (strstr(text, search) != NULL) {
        printf("Substring found!\n");
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
