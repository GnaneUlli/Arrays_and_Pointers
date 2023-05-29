#include <stdio.h>

#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    int age;
};

struct Student students[MAX_STUDENTS];

int numStudents = 0;

void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        
        printf("Maximum number of students reached.\n");
        
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &students[numStudents].id);

    printf("Enter student name: ");
    scanf(" %[^\n]", students[numStudents].name);

    printf("Enter student age: ");
    scanf("%d", &students[numStudents].age);

    numStudents++;
    printf("Student added successfully.\n");
}

void displayStudents() {
    if (numStudents == 0) {
        printf("No students found.\n");
        return;
    }

    printf("Student Details:\n");
    printf("ID\tName\tAge\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%s\t%d\n", students[i].id, students[i].name, students[i].age);
    }
}

void searchStudent() {
    int searchId;
    int found = 0;

    if (numStudents == 0) {
        printf("No students found.\n");
        return;
    }

    printf("Enter student ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < numStudents; i++) {
        
        if (students[i].id == searchId) {
            
            printf("Student found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    
    int choice;

    do {
        printf("\n-- Student Management System --\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

