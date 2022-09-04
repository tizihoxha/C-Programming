#include "c_programming.h"

/**
 *
 *
 *
 *
 */
void bubble_sort(int *temps, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (temps[j] < temps[i])
			{
				k = temps[i];
				temps[i] = temps[j];
				temps[j] = k;
			}
		}
	}
}
int main()
{
	int arr[] = {20, 17, 13, 32};
	int size = 4;
	int i;

	bubble_sort(arr, size);
	printf("Sorted array:\n");
	for (i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}



