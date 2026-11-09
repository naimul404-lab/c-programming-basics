#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    int frequency[256] = {0};

    printf("Enter a word or sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        frequency[ch]++;
    }

    printf("\nCharacter frequencies:\n");

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (frequency[ch] > 0) {
            printf("'%c' = %d\n", ch, frequency[ch]);
            frequency[ch] = 0;
        }
    }

    return 0;
}
