#include <unistd.h>

/**
 * Description: _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 if successful
 * On error return -1, and set error number appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
