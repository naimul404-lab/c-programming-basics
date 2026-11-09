#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
