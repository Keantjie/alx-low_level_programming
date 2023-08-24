#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @s: string to be modified
 *
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 32;
	}
	return (s);
}
