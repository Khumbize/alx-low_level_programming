#include "main.h"

/**
 * Description: _strncat - a function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
		x++;
	while (*(src + b) != '\0')
	{
		if (b < n)
		{
			*(dest + a) = *(src + b);
			a++;
		}
		b++;
	}
	return (dest);
}
