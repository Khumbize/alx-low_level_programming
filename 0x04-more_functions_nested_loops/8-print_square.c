#include "main.h"

/**
 * Description: print_square - A program that prints a square and a new line
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int l;
	int w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
