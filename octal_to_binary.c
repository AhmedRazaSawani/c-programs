#include <stdio.h>

void octal_to_binary(int octal) {
    int decimal = 0, base = 1, remainder;

    // Step 1: Convert octal to decimal
    while (octal > 0) {
        remainder = octal % 10;
        decimal += remainder * base;
        base *= 8;
        octal /= 10;
    }

    // Step 2: Convert decimal to binary
    int binary[32], index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    // Print binary
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("Binary: ");
    octal_to_binary(octal);
    return 0;
}
