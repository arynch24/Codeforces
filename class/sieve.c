#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(long n) {
    bool isPrime[n+1];

    // Initialize array
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; (long) i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print prime numbers
    printf("Prime numbers up to %ld:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
}

int main() {
    long n;

    // User input
    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    // Input validation
    while (n <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        scanf("%ld", &n);
    }

    // Call the Sieve of Eratosthenes function
    sieveOfEratosthenes(n);

    return 0;
}
