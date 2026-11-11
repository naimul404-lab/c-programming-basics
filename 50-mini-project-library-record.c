#include <stdio.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[80];
    char author[60];
};

int main(void) {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        printf("\n--- Library Record System ---\n");
        printf("1. Add book\n");
        printf("2. View books\n");
        printf("3. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (choice == 1) {
            if (count >= MAX_BOOKS) {
                printf("Library record is full.\n");
                continue;
            }

            printf("Enter book ID: ");
            if (scanf("%d", &books[count].id) != 1) {
                printf("Invalid ID.\n");
                return 1;
            }

            printf("Enter book title: ");
            scanf(" %79[^\n]", books[count].title);

            printf("Enter author name: ");
            scanf(" %59[^\n]", books[count].author);

            count++;
            printf("Book added successfully.\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No books recorded yet.\n");
            } else {
                printf("\n--- Book Records ---\n");
                for (int i = 0; i < count; i++) {
                    printf("\nBook %d\n", i + 1);
                    printf("ID: %d\n", books[i].id);
                    printf("Title: %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);
                }
            }
        } else if (choice != 3) {
            printf("Invalid option.\n");
        }
    } while (choice != 3);

    printf("Goodbye!\n");
    return 0;
}
