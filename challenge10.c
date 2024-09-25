#include <stdio.h>
#include <math.h>  // For mathematical operations like pow()

#define PI 3.14159  // Define the constant value for π (pi)

// Function to calculate the volume of a sphere
double calculateVolume(double radius) {
    double volume;
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    return volume;
}

int main() {
    double radius, volume;

    // Input the radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate the volume
    volume = calculateVolume(radius);

    // Display the calculated volume
    printf("The volume of the sphere is: %.2lf cubic units\n", volume);

    return 0;
}
