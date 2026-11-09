#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a number (0-20): ");
    scanf("%d", &number);

    if (number < 0 || number > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        printf("Factorial = %llu\n", factorial(number));
    }

    return 0;
}#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a number (0-20): ");
    scanf("%d", &number);

    if (number < 0 || number > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        printf("Factorial = %llu\n", factorial(number));
    }

    return 0;
}
