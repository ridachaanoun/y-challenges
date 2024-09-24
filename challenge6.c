#include <stdio.h>

int main() {
    double a, b;

    // Ask the user to enter two real numbers
    printf("Enter the first number (a): ");
    scanf("%lf", &a);
    printf("Enter the second number (b): ");
    scanf("%lf", &b);

    // Perform calculations
    double sum = a + b;
    double difference = a - b;
    double product = a * b;
    
        double quotient = a / b;
        printf("a + b = %.2lf\n", sum);
        printf("a - b = %.2lf\n", difference);
        printf("a * b = %.2lf\n", product);
        
    // Check for division by zero
    if (b != 0) {
        printf("a / b = %.2lf\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
