#include "main.h"

/**
 * _islower - c function to detect wheather a character is lowercase or not
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
