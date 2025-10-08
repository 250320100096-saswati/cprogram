#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  // Keep a copy of the number

    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10;   // Extract last digit
        sum = sum + digit;  // Add digit to sum
        num = num / 10;     // Remove last digit
    }

    // Display result
    printf("The sum of digits of %d is: %d\n", temp, sum);

    return 0;
}
