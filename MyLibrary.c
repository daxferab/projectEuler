// My functions
#include <stdbool.h>
#include <stdio.h>

bool	isMultiple(int n, int multiple)
{
	if (n % multiple == 0)
		return (true);
	return (false);
}