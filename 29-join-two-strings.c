#include <stdio.h>
#include <string.h>

int main() {
    char first[200];
    char second[100];

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    strcat(first, second);

    printf("Combined string: %s\n", first);

    return 0;
}
