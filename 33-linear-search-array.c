
#include <stdio.h>

int main() {
    int numbers[100];
    int n, search, found = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (numbers[i] == search) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found.\n");
    }

    return 0;
}
