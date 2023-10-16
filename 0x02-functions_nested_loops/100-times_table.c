#include "main.h"

/**
 * print_times_table - prints the times tableof num
 *
 * @num: takes input
 *
 * Returns: 0 success
*/

void print_times_table(int num)
{
	int prod, multiply, n;

	if (n <= 15 && n >= 0)
	{
		for (n = 0; n <= num; n++)
		{
			_putchar(48);
			for (multiply = 1; multiply <= n; multiply++)
			{
				_putchar(',');
				_putchar(' ');
				prod = n * multiply;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48);
				}
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
