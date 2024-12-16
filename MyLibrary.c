// My functions
#include <stdbool.h>
#include <stdio.h>

#define LARGEST_3_DIGIT_NUMBER 999

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

bool	isPalindrome(int num)
{
	int		original = num;
	int		reversed = 0;

	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	if (original == reversed) return (true);
	return (false);
}
