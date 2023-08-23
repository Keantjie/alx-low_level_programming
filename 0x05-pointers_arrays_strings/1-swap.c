#include "main.h"
/**
 * swap_int - swaps the integers
 * @a: the first value
 * @b: the secomd value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
