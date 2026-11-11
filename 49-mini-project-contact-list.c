#include <stdio.h>

#define MAX_CONTACTS 50

struct Contact {
    char name[50];
    char phone[20];
};

int main(void) {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    do {
        printf("\n--- Contact List ---\n");
        printf("1. Add contact\n");
        printf("2. View contacts\n");
        printf("3. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (choice == 1) {
            if (count >= MAX_CONTACTS) {
                printf("Contact list is full.\n");
                continue;
            }

            printf("Enter name: ");
            scanf(" %49[^\n]", contacts[count].name);

            printf("Enter phone number: ");
            scanf(" %19s", contacts[count].phone);

            count++;
            printf("Contact added.\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No contacts saved yet.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %s\n", i + 1,
                           contacts[i].name, contacts[i].phone);
                }
            }
        } else if (choice != 3) {
            printf("Invalid option.\n");
        }
    } while (choice != 3);

    printf("Goodbye!\n");
    return 0;
}
