#include <stdio.h>
#include "main.h"
/**
 * _isdigit - A function that checks for a digit.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
