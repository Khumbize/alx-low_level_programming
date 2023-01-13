#include "main.h"

/**
 * _print - a function that moves a string one place to the left
 * and prints the string
 * @str: string to move
 * @l: size of string
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - a function that multiplies a char with a string
 * and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - a function that checks the arguments
 * to ensure they are digits
 * @av: pointer to arguments
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - a function initializes a string
 * @str: sting to initialize
 * @l: length of string
 * Return: void
 */
void init(char *str, int l)
{
	int p;

	for (p = 0; p < l; p++)
		str[p] = '0';
	str[p] = '\0';
}

/**
 * main - a function that multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int length1, length2, length, ko, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ko = 0; e[ko]; ko++)
			_putchar(e[ko]);
		exit(98);
	}
	for (length1 = 0; argv[1][length1]; length1++)
		;
	for (length2 = 0; argv[2][length2]; length2++)
		;
	length = length1 + length2 + 1;
	a = malloc(length * sizeof(char));
	if (a == NULL)
	{
		for (ko = 0; e[ko]; ko++)
			_putchar(e[ko]);
		exit(98);
	}
	init(a, length - 1);
	for (ko = length - 1, i = 0; ko >= 0; ko--, i++)
	{
		t = mul(argv[2][ko], argv[1], length1 - 1, a, (length - 2) - i);
		if (t == NULL)
		{
			for (ko = 0; e[ko]; ko++)
				_putchar(e[ko]);
			free(a);
			exit(98);
		}
	}
	_print(a, length - 1);
	return (0);
}
