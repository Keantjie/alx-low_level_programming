#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string to add too
 * @src: string to be added
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
