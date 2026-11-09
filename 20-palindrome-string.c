#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int start = 0;
    int end;
    int isPalindrome = 1;

    printf("Enter a word: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    end = (int)strlen(text) - 1;

    while (start < end) {
        if (text[start] != text[end]) {
            isPalindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", text);
    } else {
        printf("%s is not a palindrome.\n", text);
    }

    return 0;
}
