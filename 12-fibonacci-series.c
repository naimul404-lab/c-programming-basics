#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0 || n > 46) {
        printf("Please enter a number between 1 and 46.\n");
    } else {
        printf("Fibonacci Series: ");

        for (int i = 1; i <= n; i++) {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }

        printf("\n");
    }

    return 0;
}
