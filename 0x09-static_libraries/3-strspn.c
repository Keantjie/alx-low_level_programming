#include "main.h"
/**
 * _strspn - function that gets length of substring
 * @s: string to evaluate
 * @accept: the string containing the list
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, flag;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (c);
		}
	}
	return (0);
}
