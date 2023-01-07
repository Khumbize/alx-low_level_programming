#include "main.h"

/**
 * Description: _isdigit - checks if a number is a digit
 * @c: is the number to be checked
 * Return: 0 if its not a digit and 1 if its it's a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
