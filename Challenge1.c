#include <stdio.h>

int main() {
    // Declare variables
    char name[50];
    char surname[50];
    int age;
    char gender;
    char email[100];

    // Input personal information
    printf("Enter your name: ");
    scanf("%s", name);  // Limit input to 49 characters

    printf("Enter your surname: ");
    scanf("%s", surname);  // Limit input to 49 characters

    printf("Enter your age: ");
    scanf("%d", &age);  // Input age

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);  // Space before %c to ignore newline

    printf("Enter your email address: ");
    scanf("%s", email);  // Limit input to 99 characters

    // Display the information
    printf("\n--- Personal Information ---\n");
    printf("Name: %s\n", name);
    printf("Surname: %s\n", surname);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Email: %s\n", email);

    return 0;
}
