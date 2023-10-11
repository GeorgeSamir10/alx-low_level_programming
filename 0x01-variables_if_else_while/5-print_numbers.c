#include <stdio.h>

/**
 * main - entry point
 *
 * description: c program to output integers fro, 1 to 9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
