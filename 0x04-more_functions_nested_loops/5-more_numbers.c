#include "main.h"

/**
 * Description: more_numbers - A function that prints numbers 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int line, n, times, limit;

	n = '0';
	times = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (times < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			times++;
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		times = 0;
		n = '0';
		limit = '9';
	}
}
