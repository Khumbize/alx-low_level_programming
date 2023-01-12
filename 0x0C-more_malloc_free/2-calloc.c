#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using mallo
 * @nmemb: number of elements or members.
 * @size: bytes size of elements.
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}
