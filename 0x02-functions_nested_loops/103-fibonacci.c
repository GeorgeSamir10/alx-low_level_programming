#include "main.h"

/**
 * main - entry point
 *
 * Description: print some of even values of fibonacci
 *
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
