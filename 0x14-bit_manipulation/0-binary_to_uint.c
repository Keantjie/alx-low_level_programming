#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: decimal or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		dec <<= 1;
		if (b[k] == '1')
			dec ^= 1;
		k++;
	}
	return (dec);
}
