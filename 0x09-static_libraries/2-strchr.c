#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string
 * @c: character to be located
 * @s: string to be searched
 *
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
		while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
