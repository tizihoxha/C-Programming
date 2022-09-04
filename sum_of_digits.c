#include "c_programming.h"

/**
 *
 *
 *
 *
 */
int sum_of_digits(int n)
{
	int i, sum = 0, remainder;

	i = n;

	while (i != 0)
	{
		remainder = i % 10;
		sum = sum + remainder;
		i = i / 10;
	}
	return (sum);
}

int main ()
{
	int result;
	int n;

	printf("Enter a number:\n");
	scanf("%i", &n);
	result = sum_of_digits(n);
	printf("Sum of digits of %i = %i\n", n, result);
	return (0);
}
