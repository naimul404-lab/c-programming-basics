#include <stdio.h>
#include <ctype.h>

int main() {
    char text[500];
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    printf("Enter text (finish with #):\n");

    while (1) {
        int ch = getchar();

        if (ch == EOF || ch == '#') {
            break;
        }

        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        }
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    printf("\nCharacters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
