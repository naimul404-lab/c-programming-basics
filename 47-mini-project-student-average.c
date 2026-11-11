#include <stdio.h>

int main(void) {
    int n;
    double mark, total = 0.0;

    printf("How many subjects? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Invalid number of subjects.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter mark for subject %d (0-100): ", i);
        if (scanf("%lf", &mark) != 1 || mark < 0 || mark > 100) {
            printf("Invalid mark.\n");
            return 1;
        }
        total += mark;
    }

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", total / n);

    return 0;
}
