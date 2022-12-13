#include "main.h"

/**
 *Description: _isalpha - A program's that checks for alphabetic characters.
 * @c: This is the character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, and  0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
