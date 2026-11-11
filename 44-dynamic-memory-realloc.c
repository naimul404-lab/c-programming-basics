#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int oldSize, newSize;
    int *numbers;
    int *temp;

    printf("Enter initial array size: ");
    if (scanf("%d", &oldSize) != 1 || oldSize < 1 || oldSize > 10000) {
        printf("Invalid size.\n");
        return 1;
    }

    numbers = malloc((size_t)oldSize * sizeof *numbers);
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", oldSize);
    for (int i = 0; i < oldSize; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            free(numbers);
            return 1;
        }
    }

    printf("Enter new array size: ");
    if (scanf("%d", &newSize) != 1 || newSize < 1 || newSize > 10000) {
        printf("Invalid size.\n");
        free(numbers);
        return 1;
    }

    temp = realloc(numbers, (size_t)newSize * sizeof *numbers);
    if (temp == NULL) {
        printf("Memory reallocation failed. Original memory is still valid.\n");
        free(numbers);
        return 1;
    }
    numbers = temp;

    if (newSize > oldSize) {
        printf("Enter %d additional numbers:\n", newSize - oldSize);
        for (int i = oldSize; i < newSize; i++) {
            if (scanf("%d", &numbers[i]) != 1) {
                printf("Invalid input.\n");
                free(numbers);
                return 1;
            }
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}
