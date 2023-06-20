#include "main.h"





void print_alphabet_x10(void)
{
	int i = 1;
	char c = 'a';

	do
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
	while (i <= 10);
}
