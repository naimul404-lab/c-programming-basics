#include <stdio.h>

int main() {
    int number, original, remainder;
    int reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    original = number;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
