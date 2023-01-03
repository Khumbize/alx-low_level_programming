#include "main.h"

/**
 * _strstr - a function that finds an occurence of a  substring.
 * @haystack: the string that may have another string
 * @needle: string to be searched
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, size = 0;

	while (*(needle + size) != 0)
	{
		size++;
	}

	while (*haystack != 0)
	{
		unsigned int y = 0;

		for (x = 0; x < size; x++)
		{
			if (*(haystack + x) == *(needle + x))
				y++;
		}
		if (y == size)
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
