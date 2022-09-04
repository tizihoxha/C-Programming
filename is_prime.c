#include "c_programming.h"

/**
 * is_prime: Function that checks if a number is prime
 * @n: number to be checked
 * Return: prime number in case of success
 */
int is_prime(int n)
{
	int i,m = 0,flag = 0;

	m = n/2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
			flag = 1;
			break;
	}
	if (flag == 0)
		return (0);
}
int main()
{
	int n, flag;
	printf("Enter the number to check prime:");
	scanf("%d",&n);
	flag = is_prime(n);

		if (flag == 0)
			printf("%i Number is prime\n", n);
		else if (flag != 0)
			printf("%i Number is prime\n", n);
	return 0;
}
