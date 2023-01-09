#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: pointer to array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char*) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
