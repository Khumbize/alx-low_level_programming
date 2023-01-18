#include "function_pointers.h"

/**
 * array_iterator - a function that executes an a function as a given operator
 * @array: name of pointer to array of functions
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
