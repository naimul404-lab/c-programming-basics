
#include <stdio.h>

int main() {
    int numbers[100];
    int n;
    int *ptr;

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

    ptr = numbers;

    printf("Array elements using pointer:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
