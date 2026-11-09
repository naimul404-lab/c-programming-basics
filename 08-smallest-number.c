#include <stdio.h>

int main() {
    int numbers[5];
    int smallest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Smallest number = %d\n", smallest);

    return 0;
}
