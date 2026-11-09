#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[200];
    char upper[200];
    char lower[200];

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    int i = 0;

    while (text[i] != '\0') {
        upper[i] = toupper((unsigned char)text[i]);
        lower[i] = tolower((unsigned char)text[i]);
        i++;
    }

    upper[i] = '\0';
    lower[i] = '\0';

    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);

    return 0;
}
