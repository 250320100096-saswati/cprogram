#include <stdio.h>

int main() {
    int a = 10, b = 4;
    float result;

    // Implicit type casting (int to float)
    result = a / (float)b;  // b is cast to float
    printf("Result of a / (float)b = %.2f\n", result);

    // Explicit type casting (float to int)
    float x = 9.75;
    int y;
    y = (int)x;  // fractional part truncated
    printf("Explicit type casting of %.2f to int gives %d\n", x, y);

    // Another example: int to double
    int p = 5, q = 2;
    double division = (double)p / q;
    printf("Division using  type casting: %d / %d = %.2lf\n", p, q, division);

    return 0;
}
