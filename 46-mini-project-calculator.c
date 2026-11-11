#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter an expression (example: 12 + 5): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        case '-':
            printf("Result = %.2f\n", a - b);
            break;
        case '*':
            printf("Result = %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Result = %.2f\n", a / b);
            }
            break;
        default:
            printf("Unsupported operator.\n");
    }

    return 0;
}
