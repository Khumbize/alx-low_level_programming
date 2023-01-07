#include "main.h"

/**
 * Description: _strcat - a function that concatenates two strings.
 * @dest: the pointer to destination char
 * @src: the pointer to source char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
