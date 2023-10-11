#include<stdio.h>
/**
 * main - entry point
 *
 * description: a program outputs uppercase then lowercase alphabet
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char i;
	char j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
