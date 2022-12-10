#include <stdio.h>

/**
 * Description: main - A program that prints all single digit numbers 
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = "0"; n <= "9"; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
