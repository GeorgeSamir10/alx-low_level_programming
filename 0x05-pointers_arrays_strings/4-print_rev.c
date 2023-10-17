#include "main.h"

/**
 * print_rev - prints reversed string followed by a new line
 *
 * @str: pointer to the string
 *
 * Return: 0 (success)
*/

void print_rev(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	while (i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
