// My functions
#include <stdbool.h>
#include <stdio.h>

bool	isMultiple(int n, int multiple)
{
	if (n % multiple == 0) return (true);
	return (false);
}

bool	isPrime(int num)
{
	for (int i = num - 1; i > 1; i--)
		if (num % i == 0) return (false);
	return (true);
}
