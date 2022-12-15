#include "main.h"

/**
 * Description: print_line - A program that draws a line in the terminal
 * @n: number of times the character _ will be printed
 * Return: void
 */
void print_line(int n)
{
	int l = 0;

	while (l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
