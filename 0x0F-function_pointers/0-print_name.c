#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: name of a person
 * @f: pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
