#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that returns the index of the first element
 * for which the cmp function does not return 0
 * @array: pointer array.
 * @size: array size.
 * @cmp: a pointer to the function to use in comparing values
 * Return: -1 if no element matches or if size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
