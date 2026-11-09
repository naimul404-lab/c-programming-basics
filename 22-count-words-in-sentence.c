#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int words = 0;
    int inWord = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {

        if (isspace((unsigned char)text[i])) {
            inWord = 0;
        }
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    printf("Total words: %d\n", words);

    return 0;
}
