#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase and new line 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	a = 'a';
	for (i = 0; i < 10; i++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
