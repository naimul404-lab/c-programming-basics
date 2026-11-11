
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float cgpa;
};

int main() {
    struct Student students[100];
    int n;

    printf("How many students? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }

    return 0;
}
