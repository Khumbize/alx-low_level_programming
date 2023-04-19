#include "main.h"

/**
 * _memset - a function that fills memory with a const byte
 * @s: string
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
