#include "main.h"

/**
 * main -entry point
 *
 * Description: a c program that outputs '_putchar'
 *
 * Return: 0
 */

int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
