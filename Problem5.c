// What is the smallest positive number that is evenly
//divisible by all of the numbers from 1 to 20?

#include "MyLibrary.c"

int divisible1to20(int num)
{
	for (int i = 1; i <= 20; i++)
	{
		if (!isMultiple(num, i))
			return (0);
	}
	return (num);
}

int	main(void)
{
	int num = 1;
	int smallestResult = 0;
	while (smallestResult == 0)
	{
		smallestResult = divisible1to20(num++);
	}
	return (printf("%d\n", smallestResult));
}
