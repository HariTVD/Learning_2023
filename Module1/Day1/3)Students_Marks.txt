#include <stdio.h>

int main() {
    int rollNo, physics, maths, chemistry;
    char name[50];
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter Marks in Math: ");
    scanf("%d", &maths);

    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistry);


    int total = physics + maths + chemistry;
    float percentage = (float)total/ 3;

    printf("\n Summary \n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics);
    printf("Math Marks: %d\n", maths);
    printf("Chemistry Marks: %d\n", chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
