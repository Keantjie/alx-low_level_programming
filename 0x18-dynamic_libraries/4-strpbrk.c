#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string
 * @s: string to be searched
 * @accept: string containing bytes
 *
 * Return: pointer to the byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
