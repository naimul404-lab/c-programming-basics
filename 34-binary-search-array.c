
#include <stdio.h>

int main() {
    int numbers[100];
    int n, search;
    int low, high, mid;
    int found = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d numbers in ascending order:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (numbers[mid] == search) {
            printf("Number found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (numbers[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Number not found.\n");
    }

    return 0;
}
