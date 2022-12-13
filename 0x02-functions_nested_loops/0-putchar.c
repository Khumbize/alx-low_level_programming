#include "school.h"

/**
 *Description: main - A program that prints putchar
 *Return: 0
*/

int main()
{
	char p[20]= "\_putchar";
	int k = 0;

	for (k = 0; k < 9; k++)
	{ 
		_putchar(p[k]);
	}
	_putchar('\n');

	return(0);
}
