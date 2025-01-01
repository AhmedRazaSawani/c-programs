#include <stdio.h>

void decimal_to_octal(int decimal) {
    int octal[32], index = 0;
    while (decimal > 0) {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Octal: ");
    decimal_to_octal(decimal);
    return 0;
}
