#include <stdio.h>
int main() {
    int num, n, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to toggle (starting from 0): ");
    scanf("%d", &n);
    result = num ^ (1 << n);

    printf("Number before toggling: %d\n", num);
    printf("Number after toggling %dth bit: %d\n", n, result);

    return 0;
}
