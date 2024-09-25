#include <stdio.h>
#include <stdlib.h>

// Function to display binary representation
void displayBinary(int num) {
    int binary[32]; // To hold the binary digits (max 32 bits for int)
    int index = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        // printf("%d \n",num);

        index++;
    }

    // Print binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Display the number in hexadecimal
    printf("Hexadecimal equivalent: %X\n", number);  // %X for uppercase hex

    // Display the number in binary
    printf("Binary equivalent: ");
    displayBinary(number);
    printf("\n");

    return 0;
}
