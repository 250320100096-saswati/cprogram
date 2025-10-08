#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    // Basic assignment
    a = b;
    printf("After 'a = b', a = %d\n", a);

    // Add and assign
    a += b;   // equivalent to a = a + b
    printf("After 'a += b', a = %d\n", a);

    // Subtract and assign
    a -= b;   // equivalent to a = a - b
    printf("After 'a -= b', a = %d\n", a);

    // Multiply and assign
    a *= b;   // equivalent to a = a * b
    printf("After 'a *= b', a = %d\n", a);

    // Divide and assign
    a /= b;   // equivalent to a = a / b
    printf("After 'a /= b', a = %d\n", a);

    // Modulus and assign
    a %= b;   // equivalent to a = a % b
    printf("After 'a %%= b', a = %d\n", a);

    return 0;
}
