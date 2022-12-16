#include <stdio.h>
#include "main.h"

/**
 * Description: print_number - a function that prints integers
 * @n: the integer
 * Return: 0
 */
void print_number(int n)
{
	char text[10] = "Enternum";
	int  i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(text[i]);
	}
	scanf("%d", &n);
	_putchar('\n');
	if (n > 0)
	{
		_putchar("%d\n", n);
	}
	else
	{
		_putchar("N");
		_putchar("o");
		_putchar("t");
		_putchar(" ");
		_putchar("i");
		_putchar("n");
		_putchar("t");
	}
	return (0);
}
