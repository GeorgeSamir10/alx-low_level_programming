#include "main.h"

/**
 * print_array - prints elements of array of integers
 *
 * @n: elements input parameter
 * @a: string input parameter
 *
 * Return: 0 (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
