#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Your name: %s\n", name);
    printf("String length: %zu\n", strlen(name));

    return 0;
}
