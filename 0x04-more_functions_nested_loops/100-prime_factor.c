#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * This is a simple C program.
 * It prints the largest prime factor.
 * of a very large number.
 *
 * Return: Exactly 0.
*/

int main() {
    long long int n = 612852475143;
    long long int max_factor = -1;
    long long int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            max_factor = i;
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        max_factor = n;
    }
    printf("%lld\n", max_factor);
    return 0;
}