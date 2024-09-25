#include <stdio.h>
#include <string.h>

int main() {
    char number[5];  // To hold the 4 digits plus the null terminator
    char reversedNumber[5];  // To hold the reversed number

    // Input th four-digit integer as a string
    printf("Enter a four-digit integer: ");
    scanf("%4s", number);  // %4s limits the input to 4 characters

    // Reverse the string manually
    reversedNumber[0] = number[3];  // Assign the last character to the first
    reversedNumber[1] = number[2];  // Assign the third character to the second
    reversedNumber[2] = number[1];  // Assign the second character to the third
    reversedNumber[3] = number[0];  // Assign the first character to the fourth

    // Display the reversed number
    printf("The number in reverse order is: %s\n", reversedNumber);

    return 0;
}
