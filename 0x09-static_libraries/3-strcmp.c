#include "main.h"
/**
 * _strcmp - function that helps you compare two strings
 * @s1: first string to be compared
 * @s2: second string to compare
 *
 * Return: the two strings deducted from one another
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
