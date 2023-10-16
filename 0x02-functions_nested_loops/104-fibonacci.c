#include "main.h"

/**
 * main - entry point
 *
 * Description: prints first 98 fibonacci numbers starting with 1,2
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count, initial;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", flo);
		initial = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
}
