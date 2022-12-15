#include "main.h"

/**
 * Description: print_diagonal -A function that draws diagonal line
 * @n: number of times the \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int l = 0;
	int spaces;

	if (n > 0)
	{
		while (l < n)
		{
			for (spaces = 0; spaces < l; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
