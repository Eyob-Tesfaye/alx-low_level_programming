#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, siz;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	siz = i;

	for (j = siz - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
