#include "main.h"
/**
 * *rot13 - encodes a string
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i;
	int k;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (s[i] == a[k])
			{
				s[i] = b[k];
				break;
			}
		}
	}
	return (s);
}
