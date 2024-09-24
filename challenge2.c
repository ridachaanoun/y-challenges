#include <stdio.h>

int main() {
    // Declare a variable 
    float c,k;

    // Prompt the user for the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    // Convert Celsius to Kelvin
    k = c + 273.15;

    // Display the result
    printf("Temperature in Kelvin: %.2f K\n", k);

    return 0;
}
