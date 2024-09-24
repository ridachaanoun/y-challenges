#include <stdio.h>
#include <math.h> // Include math.h for pow function

int main() {
    double a, b, c, geometric_mean;

    // Ask the user to enter three numbers
    printf("Enter the first number (a): ");
    scanf("%lf", &a);
    printf("Enter the second number (b): ");
    scanf("%lf", &b);
    printf("Enter the third number (c): ");
    scanf("%lf", &c);

    // Calculate the geometric mean
    geometric_mean = pow(a * b * c, 1.0 / 3.0);

    // Display the result
    printf("The geometric mean is: %.2lf\n", geometric_mean);

    return 0;
}
