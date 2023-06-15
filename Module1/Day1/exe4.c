#include <stdio.h>

int main() {
    float n1, n2;
    char operator;
    printf("Enter Operand 1: ");
    scanf("%f", &n1);
    printf("Enter Operand 2: ");
    scanf("%f", &n2);
    printf("Enter Operator (+, -, *, /): \n");
    scanf(" %c", &operator);
    float result;
    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
