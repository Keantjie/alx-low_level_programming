#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int maintain;

	if (index > 64)
		return (-1);
	maintain = index;
	for (k = 1; maintain > 0; k *= 2, maintain--)
		;

	if ((*n >> index) & 1)
		*n -= k;

	return (1);
}
