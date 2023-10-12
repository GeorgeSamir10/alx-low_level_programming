#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase and new line 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a';a <= 'z';a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
