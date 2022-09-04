#include "c_programming.h"

/**
 * largest_three - Function to find the largest betwen 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: biggest
 */
int largest_three(int a, int b, int c)
{
	if (a > b && b > c)
		return (a);
	else if (a < b && b > c)
		return (b);
	return (c);
}
int main()
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d\n", a);
    if (b > a && b > c)
        printf("Biggest number is %d\n", b);
    if (c > a && c > b)
        printf("Biggest number is %d\n", c);
    return 0;
}
