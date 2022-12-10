#include<stdio.h>

/**
 * Description: main - program will print different combinations of two digits
 * The numbers will be separated by comma and a space
 * The two numbers should not be the same
 * The numbers will be in ascending order
 * 10 and 01 are the same
 * Return: 0
 */

int main (void)
{
	int num1 = 48;
	int num2;
	int com = 44;
	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(com);
				putchar(32);
			}
		num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}

