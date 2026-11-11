
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float cgpa;
};

int main() {
    struct Student student;

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    printf("Enter student name: ");
    scanf(" %49[^\n]", student.name);

    printf("Enter student CGPA: ");
    scanf("%f", &student.cgpa);

    printf("\n--- Student Information ---\n");

    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("CGPA: %.2f\n", student.cgpa);

    return 0;
}
