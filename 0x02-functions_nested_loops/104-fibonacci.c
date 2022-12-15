#include <stdio.h>

/**
 *Description: main - A function that will print 98 fibonacci terms
 *Return: 0
 */
int main(void)
{
	int i;
	int n = 98;
	int t1 = 1, t2 = 2;
	int t3 = t1 + t2;

	printf("%d, %d, ", t1, t2);
	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", t3);
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}
	printf("\n");
	return (0);
}
