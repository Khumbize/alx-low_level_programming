#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory size to be allocated.
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_allocate;

	mem_allocate = malloc(b);
	if (mem_allocate == NULL)
	{
		exit(98);
	}
	return (mem_allocate);
}
