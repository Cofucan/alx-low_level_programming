#include "search_algos.h"

/**
* binary_search - Binary search algorithm on an array of integers.
 * @array: Integer array to be searched
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value is located or -1 if not found.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t u, left, right, mid;

	if (array == NULL || size == 0)
		return (-1);  /* Handle the case of invalid input or empty array */

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (u = left; u < right; u++)
			printf("%d, ", array[u]);
		printf("%d\n", array[u]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);  /* Found the value at index 'mid' */

		if (array[mid] < value)
			left = mid + 1;  /* Search the right half */
		else
			right = mid - 1;  /* Search the left half */
	}

	return (-1);  /* Value not found in the array */
}
