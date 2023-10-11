#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program to print alphabet reversed
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
