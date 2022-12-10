#include <stdio.h>

/**
 * Description: main - A program that prints all possible different comb
 * Return: 0
 */

int main(void)
{
    int a = 48;
    int b, c;
    int comb = 44;

    while (a <= 57)
    {
        b = a + 1;
        while (b <= 57)
        {
            c = b + 1;
            while (c <= 57)
            {
                putchar(a);
                putchar(b);
                putchar(c);
                if (a != 55 || b != 56 || c != 57)
                {
                    putchar(comb);
                    putchar(32);
                }
                c += 1;
            }
            b += 1;
        }
        a += 1;
    }
    putchar('\n');
    return (0);
}
