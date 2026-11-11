#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    secret = rand() % 100 + 1;

    printf("Guess the number between 1 and 100.\n");

    do {
        printf("Your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        attempts++;

        if (guess < secret) {
            printf("Too low. Try again.\n");
        } else if (guess > secret) {
            printf("Too high. Try again.\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
