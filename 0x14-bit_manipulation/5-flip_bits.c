#include "main.h"
/**
 * flip_bits - finds # of bits that need to be flipped
 * @n: number one to be flipped
 * @m: number two to be flipped to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_number = n ^ m;
	int lead = (sizeof(unsigned long int) * 8) - 1;
	int flipped_bits = 0;

	while (lead >= 0)
	{
		if ((new_number >> lead) & 1)
			flipped_bits++;
		lead--;
	}
	return (flipped_bits);
}
