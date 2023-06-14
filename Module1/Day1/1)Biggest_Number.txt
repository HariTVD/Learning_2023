#include <stdio.h>
int BiggestNumber(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    int Biggest = BiggestNumber(number1, number2);
    printf("The Biggest number is: %d\n", Biggest);

    return 0;
}
