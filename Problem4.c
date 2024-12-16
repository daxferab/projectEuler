// Find the largest palindrome made from the product of two-digit numbers.

#include "MyLibrary.c"

int main (void)
{
	int p1 = LARGEST_3_DIGIT_NUMBER;
	int p2 = LARGEST_3_DIGIT_NUMBER;
	int largest_palindrome = 0;

	while (p1 > 99)
	{
		while (p2 > 99)
		{
			if (isPalindrome(p1 * p2) && p1 * p2 > largest_palindrome)
				largest_palindrome = p1 * p2;
			p2--;
		}
		p2 = LARGEST_3_DIGIT_NUMBER;
		p1--;
	}
	printf("%d\n", largest_palindrome);
}