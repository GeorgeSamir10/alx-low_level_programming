#include <stdio.h>

/**
 * main - entry point
 *
 * descrition: c program to output compined numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i < '9' && i != '9')
		{
			putchar(92 - '0');
			putchar(' ');
		}
		i++;
	}
	putchar('$');
	return (0);
}
