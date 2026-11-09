#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int length;

    printf("Enter a word or sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    length = strlen(text);

    printf("Reversed string: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    printf("\n");

    return 0;
}
