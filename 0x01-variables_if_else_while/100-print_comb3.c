#include <stdio.h>

/**
 * main - entry point
 *
 * description: c program that outputs all posible different combs
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8 || b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		b++;
		}
	a++;
	}
	putchar('\n');
	return (0);
}
