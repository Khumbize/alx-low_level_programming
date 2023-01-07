#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string that might have bytes like those in accept
 * @accept: string of bytes
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	while (*s != 0)
	{
		for (x = 0; *(accept + x) != 0; x++)
		{
			if (*s == *(accept + x))
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
