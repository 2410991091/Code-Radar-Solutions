#include <stdio.h>

int main() {
    int a, i;
    int isPrime = 1;  // Assume the number is prime unless proven otherwise.

    scanf("%d", &a);

    // Handle special cases
    if (a <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime.
    } else {
        // Check divisibility from 2 to sqrt(a)
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0;  // a is divisible by i, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
