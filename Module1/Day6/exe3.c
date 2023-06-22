#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    const int numStudents = 5;

    struct Student students[numStudents];
    students[0] = (struct Student) {1001, "Hariharan", 100.0};
    students[1] = (struct Student) {1002, "Logu", 96.50};
    students[2] = (struct Student) {1003, "Aravind", 97.00};
    students[3] = (struct Student) {1004, "Manoj", 99.00};
    students[4] = (struct Student) {1005, "Thana", 98.50};

    printf("Details of Students:\n");
    displayStudents(students, numStudents);

    return 0;
}