
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *numbers;
    int sum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n < 1 || n > 10000) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Allocate memory dynamically
    numbers = malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Numbers: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nSum = %d\n", sum);

    // Release allocated memory
    free(numbers);

    return 0;
}
