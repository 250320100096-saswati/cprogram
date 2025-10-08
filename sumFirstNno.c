#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for positive number
    if (n <= 0)
        printf("Please enter a positive integer.\n");
    else {
        // Calculate sum using loop
        for (int i = 1; i <= n; i++) {
            sum += i; // sum = sum + i
        }

        printf("Sum of the first %d natural numbers is %d\n", n, sum);
    }

    return 0;
}
