#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 *
 * @a: array input
 * @size: the square size of the array
 *
 * Return: 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int z, x1, x2;

	x1 = 0;
	x2 = 0;
	for (z = 0; z < size; z++)
	{
		x1 += a[z];
		x2 += a[size - z - 1];
		a += size;
	}
	printf("%d, ", x1);
	printf("%d\n", x2);

}
