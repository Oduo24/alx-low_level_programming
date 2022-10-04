#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return -1;
	}
	while (i<size)
	{
		printf("Value checked array[%d] = [%d]", i, array[1]);
		if (array[i] == value)
			return i;
		i++;
	}
	return -1;
}
