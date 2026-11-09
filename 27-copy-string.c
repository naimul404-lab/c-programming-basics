#include <stdio.h>
#include <string.h>

int main() {
    char original[100];
    char copied[100];

    printf("Enter a sentence: ");
    fgets(original, sizeof(original), stdin);

    original[strcspn(original, "\n")] = '\0';

    strcpy(copied, original);

    printf("Original string: %s\n", original);
    printf("Copied string: %s\n", copied);

    return 0;
}
