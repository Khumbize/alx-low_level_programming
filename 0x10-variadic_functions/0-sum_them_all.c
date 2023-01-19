#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments.
 * Return: EXIT_SUCCESS.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	int sum = 0;

	unsigned int x;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (x = 0; x < n; x++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
