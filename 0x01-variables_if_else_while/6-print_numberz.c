#include <stdio.h>

/**
 * Description: main - A program that prints all single digit numbers 
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = "0"; a <= "9"; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
