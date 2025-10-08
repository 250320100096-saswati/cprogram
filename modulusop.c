#include <stdio.h>

int main() {
    int a, b, result;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Modulus operation
    result = a % b;

    // Display result
    printf("The remainder when %d is divided by %d is: %d\n", a, b, result);

    return 0;
}
