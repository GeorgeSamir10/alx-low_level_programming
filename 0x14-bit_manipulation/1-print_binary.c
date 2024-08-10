#include "main.h"

/**
* print_binary - prints a binary number
* @n: integer given to print as binary
* Return: void.
*/

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, number = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}
