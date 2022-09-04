#include "c_programming.h"

int main()
{
	int arr[] = {20, 17, 13, 32};
	int size = 4;
	int value = 20;
	int i;

	i = linear_search(arr, size, value);
	if (i == -1)
		printf("Value not found\n");
	else 
		printf("Value fund at index: %i\n", i);
}
/**
 * linear_search - Fuction that searches for an element in the array
 * @array: array o be searched
 * @size: number of elements in the array
 * @value: the element searched
 * Rethurn: index of the element
 */

int linear_search(int *array, int size, int value)
{
	int i;
	if (array == NULL && size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
