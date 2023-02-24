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

int main(void) {
    long long int n = 612852475143;
    long long int max_factor = -1;
    while (n % 2 == 0) {
        max_factor = 2;
        n /= 2;
    }
    for (long long int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_factor = i;
            n /= i;
        }
    }
    if (n > 2) {
        max_factor = n;
    }
    printf("%lld\n", max_factor);
    
    return 0;
}