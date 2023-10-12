#include "main.h"

/**
 * print_alphabet - print lowercase alphabet to stdout
 *
 * Return: 0 (success)
 */

void print_alphabet(void);
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
