// What is the 10001st prime number?

#include "MyLibrary.c"

int main() {
	int n = 10001;
	int i = 1;
	int count = 0;
	while (count < n) {
		i++;
		if (isPrime(i)) {
			count++;
		}
	}
	printf("%d\n", i);
	return (0);
}
