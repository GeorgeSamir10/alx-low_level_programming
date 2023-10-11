#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c program to print all base 16 characters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= 'f')
	{
		putchar(i);
		i++;
		if (i > '9' && i < 'a')
		{
			i = 'a';
		}
	}
	putchar('\n');
	return (0);
}
