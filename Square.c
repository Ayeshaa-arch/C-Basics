#include <stdio.h>

int main() {
    int number;
    int square;

    // Prompt the user to enter a number
    printf("Enter an integer: ");

    // Read the integer input from the user
    scanf("%d", &number);

    // Calculate the square of the number
    square = number * number;

    // Print the result
    printf("The square of %d is %d\n", number, square);

    return 0; // Indicate successful program execution
}