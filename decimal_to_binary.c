#include <stdio.h>

void decimal_to_binary(int decimal) {
    int binary[32], index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary: ");
    decimal_to_binary(decimal);
    return 0;
}
