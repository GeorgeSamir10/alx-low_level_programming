#include "main.h"

/**
 * swap_int - swap values of two integers using two inputs
 *
 * @x: input parameter 1
 * @y: input parameter 2
 *
 * Return: 0 (Success)
*/

void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
