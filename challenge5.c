#include <stdio.h>

int main() {
    float temperature;

    // Ask the user to enter the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    // Determine the state of water based on the temperature
    if (temperature < 0) {
        printf("At %.2f C, water is in solid form.\n", temperature);
    } else if (temperature >= 0 && temperature < 100) {
        printf("At %.2f C, water is in liquid form.\n", temperature);
    } else {
        printf("At %.2f C, water is in gaseous form.\n", temperature);
    }

    return 0;
}
