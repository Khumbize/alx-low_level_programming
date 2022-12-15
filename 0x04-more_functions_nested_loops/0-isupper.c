#include "main.h"

/**
 * Description: _isupper - checks if a letter is uppercase
 * @c: The letter to be checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
