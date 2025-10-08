#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Demonstrate relational operators
    printf("\nResults of relational operations:\n");

    printf("%d == %d : %d\n", a, b, a == b);   // Equal to
    printf("%d != %d : %d\n", a, b, a != b);   // Not equal to
    printf("%d >  %d : %d\n", a, b, a > b);    // Greater than
    printf("%d <  %d : %d\n", a, b, a < b);    // Less than
    printf("%d >= %d : %d\n", a, b, a >= b);   // Greater than or equal to
    printf("%d <= %d : %d\n", a, b, a <= b);   // Less than or equal to

    return 0;
}
