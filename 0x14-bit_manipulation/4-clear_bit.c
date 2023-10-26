#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: integer to find bit to convert
 * @index: index of bit to convert
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number_change = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	number_change <<= index;
	*n = *n & ~number_change;
	return (1);
}
