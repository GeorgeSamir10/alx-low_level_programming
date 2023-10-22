#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: char string type
 * @src: cahr string type
 *
 * Description: copy string pointed to by a pointer src
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
