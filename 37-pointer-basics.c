
#include <stdio.h>

int main() {
    int number = 100;

    int *ptr;

    ptr = &number;

    printf("Value of number: %d\n", number);

    printf("Address of number: %p\n", (void *)&number);

    printf("Value stored in pointer: %p\n", (void *)ptr);

    printf("Value pointed by pointer: %d\n", *ptr);

    return 0;
}
