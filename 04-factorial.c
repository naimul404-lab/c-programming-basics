#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (number > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
