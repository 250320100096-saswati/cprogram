#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        // Calculate factorial using loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}
