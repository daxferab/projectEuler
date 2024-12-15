// Find the sum of all the multiples of 3 or 5 below 1000

#include "MyLibrary.c"
#include <stdio.h>

int	main (void)
{
	int i = 0;

	for (int j = 0; j < 1000; j++)
	{
		if (isMultiple(j, 3) || isMultiple(j, 5))
			i += j;
	}
	printf("%d\n", i);
	return (0);
}