#include <stdio.h>

int main() {
    double length, width;
    // Input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Display the calculated area
    printf("The area of the rectangle is: %.2lf square units\n", length * width);

    return 0;
}
