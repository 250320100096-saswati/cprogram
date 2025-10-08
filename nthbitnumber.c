#include <stdio.h>

int main() {
    int num, n, result;

    // Input number and bit position
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to set (starting from 0): ");
    scanf("%d", &n);
    result = num | (1 << n);

    printf("Number before setting bit: %d\n", num);
    printf("Number after setting %dth bit: %d\n", n, result);

    return 0;
}
