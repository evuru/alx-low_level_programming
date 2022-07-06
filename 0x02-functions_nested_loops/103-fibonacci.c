#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int a, b, c, d, s;

	a = 1;
	b = 2;
	s = 0;
	for (d = 1; d <= 33; d++)
	{
		if (a < 4000000 && a % 2 == 0)
			s = s + a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%u\n", s);
	return (0);
}

