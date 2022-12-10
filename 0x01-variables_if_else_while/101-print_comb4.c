#include <stdio.h>

/**
 * Description: main - A program that prints different comb of 3 digits
 * Return: 0
 */

int main(void)
{
	int num1 = 48;
	int num2, num3;
	int comb = 44;

	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != 55 || num2 != 56 || num3 != 57)
				{
					putchar(comb);
					putchar(32);
				}
				num3 += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}
