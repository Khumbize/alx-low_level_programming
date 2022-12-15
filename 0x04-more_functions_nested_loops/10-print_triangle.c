#include "main.h"

/**
 * Description: print_triangle - A program that prints a triangle
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int l = 0;
	int spaces;
	int hashes;

	if (size > 0)
	{
		while (l < size)
		{
			for (spaces = size - 1; spaces > l; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < l + 1; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
