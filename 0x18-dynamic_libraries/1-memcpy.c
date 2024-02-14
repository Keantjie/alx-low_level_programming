#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @n: number of bytes from memory area
 * @src: memory area to be copied from
 * @dest: memory area to be copied too
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
