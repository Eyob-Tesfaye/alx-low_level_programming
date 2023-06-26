#include "main.h"
#include <string.h>

/**
 * int _strlen - 
 * @s: int
 *
 * Return: nothing.
 */
int _strlen(char *s)
{	
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
