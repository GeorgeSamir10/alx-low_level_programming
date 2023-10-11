#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program detects wheather the number is (+, -, 0)
 *
 * Return: Alwayes 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
		printf("%d is zero", n);
	return (0);
}
