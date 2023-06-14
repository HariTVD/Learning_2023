#include <stdio.h>

    int bitoperation(int num, int opertype) {
    int result = num;

    switch (opertype) {
        case 1: 
            result |= 1;  
            break;
        case 2:  // Clear 31st bit
            result &= ~(1 << 31);  
            break;
        case 3:  // Toggle 16th bit
            result ^= (1 << 16);  
            break;
        default:
            printf("Invalid operation type\n");
            return num; 
    }

    return result;
}

int main() {
    int num, opertype;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type 1, 2, 3: ");
    scanf("%d", &opertype);

    int result = bitoperation(num, opertype);
    printf("Result: %d\n", result);

    return 0;
}

