#include "c_programming.h"

/**
 * recursive_factorial - Function that finds the factorial of a number recursively
 * @n: the number
 * Return: the factorial
 */
int recursive_factorial(int n)
{
	if (n == 0)
		return (1);
	else 
		return(n * recursive_factorial(n - 1));
}
int main()
{
	int number;
	int factorial;
	printf("Enter a number: ");
	scanf("%d", &number);

	factorial = recursive_factorial(number);
	printf("Factorial of %d is %d\n", number, factorial);
}
