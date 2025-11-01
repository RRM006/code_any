#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.5;
    char c = 'A';

    float sum = a + b; // valid
    int diff = a - 2;  // valid

    // invalid examples:
    // a = "Hello";     // error: incompatible types
    // c = c + "Z";     // error: invalid operands

    printf("sum = %.2f, diff = %d\n", sum, diff);
    return 0;
}
