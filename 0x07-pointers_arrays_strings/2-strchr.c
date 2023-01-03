#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: character to be located
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
