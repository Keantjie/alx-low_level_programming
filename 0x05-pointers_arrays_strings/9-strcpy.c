#include "main.h"
/**
 * *_strcpy - copies the string point
 * @dest: pointer to buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k, i;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
