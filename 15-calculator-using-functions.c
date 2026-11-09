#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    int choice;

    printf("===== FUNCTION CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", add(num1, num2));
            break;

        case 2:
            printf("Result = %.2f\n", subtract(num1, num2));
            break;

        case 3:
            printf("Result = %.2f\n", multiply(num1, num2));
            break;

        case 4:
            if (num2 != 0) {
                printf("Result = %.2f\n", divide(num1, num2));
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
