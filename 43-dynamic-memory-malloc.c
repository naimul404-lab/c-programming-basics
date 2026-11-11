#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, sum = 0;
    int *numbers;

    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        printf("Invalid array size.\n");
        return 1;
    }

    numbers = malloc((size_t)n * sizeof *numbers);

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            free(numbers);
            return 1;
        }
        sum += numbers[i];
    }

    printf("Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nSum = %d\n", sum);

    free(numbers);
    return 0;
}
