#include <stdio.h>

int octal_to_decimal(int octal) {
    int decimal = 0, base = 1, remainder;
    while (octal > 0) {
        remainder = octal % 10;
        decimal += remainder * base;
        base *= 8;
        octal /= 10;
    }
    return decimal;
}

int main() {
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("Decimal: %d\n", octal_to_decimal(octal));
    return 0;
}
