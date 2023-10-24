#include "main.h"

/**
 * set_string - sets value of pointer to character
 *
 * @s: pointer that points to a pointer
 * @to: pointer to a Char
 *
 * Return: 0
*/

void set_string(char **s, char *to)
{
	*s = to;
}
