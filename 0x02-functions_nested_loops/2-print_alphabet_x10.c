#include "main.h"





void print_alphabet_x10(void)
{
	int i = 1;

	do {
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}while (i <= 10);
}
