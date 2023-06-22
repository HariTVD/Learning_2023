#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudent(const struct Student* student) {
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
    printf("\n");
}

void searchStudent(const struct Student* students, int numStudents, const char* name) {
    int found = 0;

    for (int i = 0; i < numStudents; ++i) {
        if (strcmp(students[i].name, name) == 0) {
            found = 1;
            printf("Student found:\n");
            displayStudent(&students[i]);
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    const int numStudents = 5;

    struct Student students[numStudents];

    students[0].rollno = 1001;
    strncpy(students[0].name, "Hariharan", sizeof(students[0].name) - 1);
    students[0].name[sizeof(students[0].name) - 1] = '\0';
    students[0].marks = 100.0;

    students[1].rollno = 1002;
    strncpy(students[1].name, "Logu", sizeof(students[1].name) - 1);
    students[1].name[sizeof(students[1].name) - 1] = '\0';
    students[1].marks = 96.50;

    students[2].rollno = 1003;
    strncpy(students[2].name, "Aravind", sizeof(students[2].name) - 1);
    students[2].name[sizeof(students[2].name) - 1] = '\0';
    students[2].marks = 97.00;

    students[3].rollno = 1004;
    strncpy(students[3].name, "Manoj", sizeof(students[3].name) - 1);
    students[3].name[sizeof(students[3].name) - 1] = '\0';
    students[3].marks = 99.00;

    students[4].rollno = 1005;
    strncpy(students[4].name, "Thana", sizeof(students[4].name) - 1);
    students[4].name[sizeof(students[4].name) - 1] = '\0';
    students[4].marks = 98.50;

    char searchName[20];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    searchStudent(students, numStudents, searchName);

    return 0;
}