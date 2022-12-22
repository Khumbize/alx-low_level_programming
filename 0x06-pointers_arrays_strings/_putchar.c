#include <unistd.h>

/**
 * Description: _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 if successful
 * On error returns -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
