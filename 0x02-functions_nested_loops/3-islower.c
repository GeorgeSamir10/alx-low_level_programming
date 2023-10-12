#include "main.h"

/**
 * _islower - c function to detect wheather a character is lowercase or not
 * @c: inputs the character the function to determine it is Lowercase or not
 *
 * return: on lowercase (success) 1;
 * on upppercase (no success) 0;
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
