#include "main.h"

/**
 * _memcpy - a function that copies copies memory area.
 * @dest: destination sring
 * @src: source string
 * @n: number of  bytes to fill
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
