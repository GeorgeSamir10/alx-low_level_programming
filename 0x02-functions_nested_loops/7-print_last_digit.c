#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: takes number input
 *
 * Return: lastdigit
 */
i
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastdDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
