#include <stdio.h>
#include <math.h>

int binary_to_octal(int binary) {
    int decimal = 0, base = 1, remainder, octal = 0, factor = 1;

    // Step 1: Convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    // Step 2: Convert decimal to octal
    while (decimal > 0) {
        remainder = decimal % 8;
        octal += remainder * factor;
        factor *= 10;
        decimal /= 8;
    }

    return octal;
}

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Octal: %d\n", binary_to_octal(binary));
    return 0;
}
