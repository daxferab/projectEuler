//

#include "MyLibrary.c"

int squareSum(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i;
	return (sum * sum);
}

int sumSquares(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i * i;
	return (sum);
}

int main(void)
{
	return(printf("%d\n", (squareSum(100) - sumSquares(100))));
}
