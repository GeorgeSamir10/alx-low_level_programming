#include <stdio.h>
#include <stdlib.h>
/**
 * main - Finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 if success
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long factor = 2;

	while (number)
	{
		if (number / factor > 0 && number % factor == 0)
			number /= factor;
		else if (number / factor > 0 && number % factor != 0)
			factor++;
		else
			break;
	}
	printf("%ld\n", factor);
	return (0);
}
