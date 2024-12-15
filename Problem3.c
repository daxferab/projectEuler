// What is the largest prime factor of the number 600851475143?

#include "MyLibrary.c"

static long	nextPrime(int current)
{
	long	prime = current + 1;
	while (!isPrime(prime))
		prime++;
	return (prime);
}

int main(void) {
    long number = 600851475143;
    long largestPrimeFactor = 0;
    long factor = 2;

    while (number > 1) {
        if (number % factor == 0) {
            largestPrimeFactor = factor;
            while (number % factor == 0)
                number /= factor;
        }
        factor = nextPrime(factor);
    }

    printf("%ld\n", largestPrimeFactor);
    return 0;
}

