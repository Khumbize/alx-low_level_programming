#include "main.h"

/**
 * Description: string_toupper - a function that changes letters to Upc
 * of a string to uppercase.
 * @ch: Pointer to Char
 * Return: Always 0.
 */

char *string_toupper(char *ch)
{
	int x = 0;

	while (*(ch + x) != '\0')
	{
		if (*(ch + x) >= 97 && *(ch + x) <= 122)
			*(ch + x) = *(ch + x) - ' ';
		x++;
	}
	return (ch);
}
