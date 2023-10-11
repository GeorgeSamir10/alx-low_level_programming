#include<stdio.h>

/**
 * main - entry point
 *
 * Description: c program that output all alphabet except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z' && (i != 'q' || i != 'e'))
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
