#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int siz, i;

	siz = 0;

	while (str[siz] != '\0')
	{
		siz++;
	}

	for (i = 0; i < siz; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
