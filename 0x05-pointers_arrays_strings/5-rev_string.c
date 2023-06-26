#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, siz, siz1;

	siz = 0;
	siz1 = 0;

	while (s[siz] != '\0')
	{
		siz++;
	}

	siz1 = siz - 1;

	for (i = 0; i < siz / 2; i++)
	{
		tmp = s[i];
		s[i] = s[siz1];
		s[siz1--] = tmp;
	}
}
