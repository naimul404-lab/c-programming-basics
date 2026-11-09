#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    int j = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n') {
            text[j] = text[i];
            j++;
        }
    }

    text[j] = '\0';

    printf("String without spaces: %s\n", text);

    return 0;
}
