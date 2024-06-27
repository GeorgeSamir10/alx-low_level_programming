#include"main.h"
/**
 * print_triangle - A function who print a triangle
 *
 * @size: size of a triangle
 *
 * Return: Does not return anything
 */
void print_triangle(int size)
{
	int p1, p2, space, output;

	for (p1 = 1; p1 <= size; p1++)
	{
		space = size - p1;
		output = size - space;

		for (p2 = 1; p2 <= space; p2++)
		{
			_putchar(' ');
		}
		for (p2 = 1; p2 <= output; p2++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
	if (size <= 0)
		_putchar('\n');
}
