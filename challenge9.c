#include <stdio.h>
#include <math.h>  // To use the sqrt(),pow functions

// Function to calculate the distance between two points in a 3D space
double calculateDistance(double x1, double y1, double z1, double x2, double y2, double z2) {
    double distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    return distance;
}

int main() {
    double x1, y1, z1, x2, y2, z2, distance;

    // Input the coordinates of the two points
    printf("Enter the coordinates of the first point (x1, y1, z1): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Enter the coordinates of the second point (x2, y2, z2): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    // Calculate the distance
    distance = calculateDistance(x1, y1, z1, x2, y2, z2);

    // Display the calculated distance
    printf("The distance between the two points is: %.2lf\n", distance);

    return 0;
}
