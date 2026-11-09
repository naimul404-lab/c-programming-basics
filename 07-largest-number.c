#include <stdio.h>

int main() {
    int numbers[5];
    int largest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Largest number = %d\n", largest);

    return 0;
}
