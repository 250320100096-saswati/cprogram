#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int temp = num;  // Keep a copy for display

    // Counting set bits
    while (num > 0) {
        if (num & 1)   // Check if last bit is 1
            count++;
        num = num >> 1;  // Right shift by 1 bit
    }

    printf("Number of set bits in %u is: %d\n", temp, count);

    return 0;
}
