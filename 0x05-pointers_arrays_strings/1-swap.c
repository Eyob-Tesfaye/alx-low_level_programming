#include "main.h"

/** swap_int - swaps two int values
 * @a: int
 * @b: Int
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
