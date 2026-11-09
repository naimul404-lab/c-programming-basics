#include <stdio.h>

int main() {
    int number, remainder;
    int reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
    } else {
        while (number != 0) {
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number = number / 10;
        }

        printf("Reversed number = %d\n", reversed);
    }

    return 0;
}
