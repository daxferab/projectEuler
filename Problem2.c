// 

#include "MyLibrary.c"

int SUM = 2;

static int	fibbonacciEven(int f1, int f2, int limit)
{
	int current = 0;

	current = f1 + f2;
	f1 = f2;
	f2 = current;
	if (isMultiple(current, 2))
		SUM += current;
	if (current > limit)
		return (SUM);
	fibbonacciEven(f1, f2, limit);
}

int	main (void)
{
	int sum = 0;

	sum = fibbonacciEven(1, 2, 4000000);
	printf ("%d\n", sum);
}