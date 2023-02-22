#include <stdio.h>

/**
 * main - Entry point
 * 
 * This is a C program.
 * It prints the first 98 fibonacci numbers.
 *
 * Return: 0
*/

int main() {
    int i;
    long fib[100];

    fib[0] = 1;
    fib[1] = 2;

    printf("%ld, %ld, ", fib[0], fib[1]);

    for (i = 2; i < 98; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%ld", fib[i]);

        if (i != 97) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
