#include "main.h"

/**
 *Description: main - A program that prints putchar
 *Return: 0
*/

int main()
{
	char c[10]= "\_putchar";
	int k = 0;

	for (k = 0; k < 9; k++)
	{ 
		_putchar(c[k]);
	}
	_putchar('\n');

	return(0);
}
