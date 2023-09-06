#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: string to be added
 * @src: string to be copied too
 * @n: number of bytes to be copied
 *
 * Return: pointer to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
