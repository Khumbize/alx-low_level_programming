#include "main.h"

/**
 *Description:  _islower - Checks for lowercase characters.
 *@c: This is the character to be checked
 *
 * Return: 1 if character is lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
