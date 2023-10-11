#include <stdio.h>

/**
 * main - entry point
 *
 * description: c program to output integers from 1 to 9 using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
